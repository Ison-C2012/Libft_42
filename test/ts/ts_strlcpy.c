
#include <bsd/string.h>
#include <stdio.h>

#include "libft.h"

int	main(void)
{
	char	*dst;
	char	*src;
	size_t	size;

	dst = (char *)calloc(10, sizeof(char));
	if (!dst)
		return (1);
	src = strdup("Good Bey.");
	if (!src)
		return (1);
	size = 4;
	printf("%s\t%zu\t%s\t%zu\n", src, size,  dst, ft_strlcpy(dst, src, size));
	bzero(dst, 10);
	free(src);

	/* i don't know why dst doesn't become segv though ft cpy larger than dstsize. */
	src = strdup("Anata no inai sekai ja,,,");
	if (!src)
		return (1);
	size = 30;
	printf("%s\t%zu\t%s\t%zu\n", src, size,  dst, ft_strlcpy(dst, src, size));
	bzero(dst, 10);
	printf("%s\t%zu\t%s\t%zu\n", src, size,  dst, strlcpy(dst, src, size));
	free(src);
}

