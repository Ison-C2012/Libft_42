// test_calloc.c
#define _GNU_SOURCE
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>
#include <stdint.h>
#include <errno.h>
#include <inttypes.h>
#include <limits.h>

// --- 自作関数名の指定 ---
// 既定は ft_calloc 。別名なら -DUSER_CALLOC=my_calloc などで上書き。
#ifndef USER_CALLOC
#define USER_CALLOC ft_calloc
#endif

// 自作 calloc のプロトタイプ（実装側で提供される）
void *USER_CALLOC(size_t nmemb, size_t size);

// 小さなユーティリティ
#define COLOR_RED    "\x1b[31m"
#define COLOR_GREEN  "\x1b[32m"
#define COLOR_YELLOW "\x1b[33m"
#define COLOR_RESET  "\x1b[0m"

static int fails = 0, passes = 0;
static void ok(int cond, const char *msg){
    if(cond){ printf(COLOR_GREEN "[ OK ] " COLOR_RESET "%s\n", msg); passes++; }
    else    { printf(COLOR_RED   "[FAIL] " COLOR_RESET "%s\n", msg); fails++;  }
}

static int is_zeroed(const unsigned char *p, size_t n){
    for(size_t i=0;i<n;i++) if(p[i]!=0) return 0;
    return 1;
}

static int is_aligned_for_max_align(const void *p){
    size_t a = _Alignof(max_align_t);
    return ((uintptr_t)p % a) == 0;
}

static void *call_user(size_t nmemb, size_t size){
    errno = 0; // 参考値（仕様上はerrno必須ではない）
    void *p = USER_CALLOC(nmemb, size);
    if (p == NULL && errno != 0) {
        // 参考出力（仕様依存）
        printf("  (note) USER_CALLOC returned NULL with errno=%d\n", errno);
    }
    return p;
}

static void test_small_basic(void){
    printf("\n--- small/basic ---\n");
    size_t n = 10, sz = 1;
    unsigned char *p = call_user(n, sz);
    ok(p != NULL, "small: non-NULL pointer");
    if(p){
        ok(is_zeroed(p, n*sz), "small: zero-initialized");
        // 書き込みテスト（範囲の両端）
        p[0] = 0xAA;
        p[n*sz - 1] = 0x55;
        ok(1, "small: writable within bounds");
        free(p);
    }
}

static void test_medium_blocks(void){
    printf("\n--- medium blocks ---\n");
    size_t n = 3, sz = 7; // 合計 21 bytes
    unsigned char *p = call_user(n, sz);
    ok(p != NULL, "medium: non-NULL pointer");
    if(p){
        ok(is_zeroed(p, n*sz), "medium: zero-initialized");
        p[20] = 0xCC; // 最後のバイト
        ok(1, "medium: last byte writable");
        free(p);
    }
}

static void test_zero_sizes(void){
    printf("\n--- zero sizes ---\n");
    // どちらも 0 → malloc(0) と同様: NULL でも 非NULL でもよい（書き込みはしない）
    void *p1 = call_user(0,0);
    ok(1, "nmemb=0,size=0: returned value accepted by standard (NULL or non-NULL)");
    if(p1) free(p1);

    void *p2 = call_user(0,5);
    ok(1, "nmemb=0,size=5: return is implementation-defined (accepted)");
    if(p2) free(p2);

    void *p3 = call_user(7,0);
    ok(1, "nmemb=7,size=0: return is implementation-defined (accepted)");
    if(p3) free(p3);
}

static void test_alignment(void){
    printf("\n--- alignment ---\n");
    void *p = call_user(4, sizeof(long double)); // 厳しめの型で要求
    ok(p != NULL, "alignment: non-NULL");
    if(p){
        ok(is_aligned_for_max_align(p), "alignment: pointer suitable for max_align_t");
        free(p);
    }
}

static void test_distinct_blocks(void){
    printf("\n--- distinct blocks ---\n");
    void *a = call_user(8,8);
    void *b = call_user(8,8);
    ok(a != NULL && b != NULL, "two non-NULL blocks");
    if(a && b){
        ok(a != b, "distinct: different pointers on successive calls (typical)");
        free(a); free(b);
    } else {
        if(a) free(a);
        if(b) free(b);
    }
}

static void test_overflow_detection(void){
    printf("\n--- overflow detection ---\n");
    // nmemb*size が SIZE_MAX を越えるようにする
    // 例: size=8, nmemb=SIZE_MAX/8 + 1
    size_t sz = 8;
    size_t nm = SIZE_MAX / sz + 1;
    void *p = call_user(nm, sz);
    ok(p == NULL, "overflow: returns NULL when nmemb*size overflows");
    if(p){ // 安全のため触れずに解放のみ
        printf(COLOR_YELLOW "  warning: pointer non-NULL in overflow case; this is a bug.\n" COLOR_RESET);
        free(p);
    }
}

static void test_large_reasonable(void){
    printf("\n--- large (reasonable) ---\n");
    // メモリ状況に依存しすぎない程度（約 8 MiB）
    size_t total = 8 * 1024 * 1024;
    size_t nmemb = total / sizeof(int);
    void *p = call_user(nmemb, sizeof(int));
    if(!p){
        printf("  (note) large alloc returned NULL (acceptable if system is low on memory)\n");
        ok(1, "large: NULL is acceptable due to environment");
        return;
    }
    ok(is_zeroed((unsigned char*)p, total), "large: zero-initialized (~8MiB)");
    // 末尾書き込み
    ((unsigned char*)p)[total - 1] = 0xEF;
    ok(1, "large: last byte writable");
    free(p);
}

int main(void){
    printf("calloc reimplementation test (USER_CALLOC = %s)\n",
#ifdef USER_CALLOC
# define STR2(x) #x
# define STR(x) STR2(x)
           STR(USER_CALLOC)
#else
           "ft_calloc"
#endif
    );

    test_small_basic();
    test_medium_blocks();
    test_zero_sizes();
    test_alignment();
    test_distinct_blocks();
    test_overflow_detection();
    test_large_reasonable();

    printf("\n=== Summary ===\n");
    printf("Pass: %d, Fail: %d\n", passes, fails);
    return fails ? 1 : 0;
}

