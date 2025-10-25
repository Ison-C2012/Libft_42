
#include <string.h>
#include <stdio.h>

int	main(void)
{
	char	mem[100];
	char	*src;
	char	*dst;
	bzero(mem, 100);
	src = (char *)memcpy(mem, "coucou", strlen("coucou"));
	printf("%s\t", src);
	dst = (char *)memcpy(mem + 50, "duidui", strlen("duidui"));
	printf("%s\t", dst);
	printf("%s\t", (char *)memmove(dst, src, 3));
	printf("\n");

}
