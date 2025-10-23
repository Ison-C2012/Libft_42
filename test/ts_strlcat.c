
#include <bsd/string.h>
#include <stdio.h>

#include "libft.h"

#define DSTSIZE 10

int	main(void)
{
	char	*dst;
	char	*src;
	size_t	size;

	dst = (char *)calloc(DSTSIZE, sizeof(char));
	if (!dst)
		return (1);
	strlcpy(dst, "Good", DSTSIZE);
	src = strdup(" Bey.");
	if (!src)
		return (1);
	size = DSTSIZE;
	printf("%s\t", dst);
	printf("%s\t%zu\t%s\t%zu\n", src, size,  dst, ft_strlcat(dst, src, size));
	bzero(dst, DSTSIZE);
	free(src);

	/* i don't know why dst doesn't become segv though ft cpy larger than dstsize. */
	strlcpy(dst, "Good", DSTSIZE);
	src = strdup("Anata no inai sekai ja,,,");
	if (!src)
		return (1);
	size = 30;
	printf("%s\t", dst);
	printf("%s\t%zu\t%s\t%zu\n", src, size,  dst, ft_strlcat(dst, src, size));
	bzero(dst, DSTSIZE);
	strlcpy(dst, "Good", DSTSIZE);
	printf("%s\t", dst);
	printf("%s\t%zu\t%s\t%zu\n", src, size,  dst, strlcat(dst, src, size));
	free(src);
}

