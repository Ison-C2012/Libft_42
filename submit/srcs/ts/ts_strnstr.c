#include "libft.h"

#include <string.h>
#include <stdlib.h>
#include <stdio.h>

int	main(void)
{
	char	big[100];
	char	ltl[10];
	size_t	n;

	memset(big, 0, 100);
	memset(ltl, 0, 10);
	memcpy(big, "Hello, again.", strlen("Hello, again."));
	memcpy(ltl, "o, ", strlen("o, "));
	n = ft_strlen(big);
	printf("%s\t%s\t%zu\t%s\n", big, ltl, n, ft_strnstr(big, ltl, n));
	bzero(big, 100);
	bzero(ltl, 10);

	memcpy(big, "", strlen(""));
	memcpy(ltl, "", strlen(""));
	n = ft_strlen(big);
	printf("%s\t%s\t%zu\t%s\n", big, ltl, n, ft_strnstr(big, ltl, n));
	bzero(big, 100);
	bzero(ltl, 10);


}
