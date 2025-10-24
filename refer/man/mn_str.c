#include <string.h>
#include <bsd/string.h>
#include <stdio.h>

void	man_strlcpy(void)
{
	char	dst[100] = "Hello";
	char	src[100] = "Bonjour";

	printf("dst:%s\n", dst);
	printf("src:%s\n", src);
	printf("strlcpy:%ld\n", strlcpy(dst, src, strlen(src) + 100));
	printf("dst:%s\n", dst);
}

void	man_strlcat(void)
{
	char	dst[6] = "Hello";
	char	src[100] = "Bonjour";

	printf("dst:%s\n", dst);
	printf("src:%s\n", src);
	printf("strlcat:%ld\n", strlcat(dst, src, strlen(dst) - 3));
	printf("dst:%s\n", dst);
}

void	man_strncmp(void)
{
	char	*s1;
	char	*s2 = "everytime.";
	
	/*printf("s1:%s\n", s1);
	printf("s2:%s\n", s2);*/
	printf("%d\n", strncmp(s1, s2, 10));
	printf("%d\n", strncmp(s1, s2, 5));
	printf("%d\n", strncmp(s1, s2, 11));
	printf("%d\n", strncmp(s1, s2, 123));
}


int	main(void)
{
	/*man_strlcpy();
	printf("\n");
	man_strlcat();
	printf("\n");*/
	man_strncmp();
	printf("\n");
	return 0;
}
