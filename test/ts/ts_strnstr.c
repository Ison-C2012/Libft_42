#include "libft.h"

#include <bsd/string.h>
#include <stdlib.h>
#include <stdio.h>

int	main(void)
{
	char	*big;
	char	*ltl;
	size_t	n;

	big = strdup("Hello, again. my little lover.");
	ltl = strdup("o, ");
	n = 5;
	printf("\nman\n");
	printf("%s\t%s\t%zu\t%s\n", big, ltl, n, strnstr(big, ltl, n));
	printf("\nft_\n");
	printf("%s\t%s\t%zu\t%s\n", big, ltl, n, ft_strnstr(big, ltl, n));
	free(ltl);
	ltl = strdup("");
	printf("\nman\n");
	printf("%s\t%s\t%zu\t%s\n", big, ltl, n, strnstr(big, ltl, n));
	printf("\nft_\n");
	printf("%s\t%s\t%zu\t%s\n", big, ltl, n, ft_strnstr(big, ltl, n));
	free(ltl);
	ltl = strdup("llo");
	printf("\nman\n");
	printf("%s\t%s\t%zu\t%s\n", big, ltl, n, strnstr(big, ltl, n));
	printf("\nft_\n");
	printf("%s\t%s\t%zu\t%s\n", big, ltl, n, ft_strnstr(big, ltl, n));
	free(ltl);
	n = 30;
	ltl = strdup(". ");
	printf("\nman\n");
	printf("%s\t%s\t%zu\t%s\n", big, ltl, n, strnstr(big, ltl, n));
	printf("\nft_\n");
	printf("%s\t%s\t%zu\t%s\n", big, ltl, n, ft_strnstr(big, ltl, n));
	free(ltl);
	free(big);

	/*little=""*/
	ltl = strdup("");
	big = strdup("abc");
	n = 3;
	printf("\nman\n");
	printf("%s\t%s\t%zu\t%s\n", big, ltl, n, strnstr(big, ltl, n));
	printf("\nft_\n");
	printf("%s\t%s\t%zu\t%s\n", big, ltl, n, ft_strnstr(big, ltl, n));
	free(big);
	big = strdup("");
	n = 1;
	printf("\nman\n");
	printf("%s\t%s\t%zu\t%s\n", big, ltl, n, strnstr(big, ltl, n));
	printf("\nft_\n");
	printf("%s\t%s\t%zu\t%s\n", big, ltl, n, ft_strnstr(big, ltl, n));
	free(big);
	big = strdup("");
	n = 0;
	printf("\nman\n");
	printf("%s\t%s\t%zu\t%s\n", big, ltl, n, strnstr(big, ltl, n));
	printf("\nft_\n");
	printf("%s\t%s\t%zu\t%s\n", big, ltl, n, ft_strnstr(big, ltl, n));
	free(big);
	big = strdup("abc");
	n = 0;
	printf("\nman\n");
	printf("%s\t%s\t%zu\t%s\n", big, ltl, n, strnstr(big, ltl, n));
	printf("\nft_\n");
	printf("%s\t%s\t%zu\t%s\n", big, ltl, n, ft_strnstr(big, ltl, n));
	free(ltl);
	free(big);
	
	/*n=0*/
	big = strdup("");
	ltl = strdup("");
	n = 0;
	printf("\nman\n");
	printf("%s\t%s\t%zu\t%s\n", big, ltl, n, strnstr(big, ltl, n));
	printf("\nft_\n");
	printf("%s\t%s\t%zu\t%s\n", big, ltl, n, ft_strnstr(big, ltl, n));
	free(ltl);
	free(big);
	big = strdup("abc");
	ltl = strdup("");
	printf("\nman\n");
	printf("%s\t%s\t%zu\t%s\n", big, ltl, n, strnstr(big, ltl, n));
	printf("\nft_\n");
	printf("%s\t%s\t%zu\t%s\n", big, ltl, n, ft_strnstr(big, ltl, n));
	free(ltl);
	free(big);
	big = strdup("");
	ltl = strdup("abc");
	printf("\nman\n");
	printf("%s\t%s\t%zu\t%s\n", big, ltl, n, strnstr(big, ltl, n));
	printf("\nft_\n");
	printf("%s\t%s\t%zu\t%s\n", big, ltl, n, ft_strnstr(big, ltl, n));
	free(ltl);
	free(big);
	big = strdup("abc");
	ltl = strdup("abc");
	printf("\nman\n");
	printf("%s\t%s\t%zu\t%s\n", big, ltl, n, strnstr(big, ltl, n));
	printf("\nft_\n");
	printf("%s\t%s\t%zu\t%s\n", big, ltl, n, ft_strnstr(big, ltl, n));
	free(ltl);
	free(big);
	
	/*NULL*/
	/*big = strdup("");
	ltl = (char *)NULL;
	n = 0;
	printf("\nman\n");
	printf("%s\t%s\t%zu\t%s\n", big, ltl, n, strnstr(big, ltl, n));
	printf("\nft_\n");
	printf("%s\t%s\t%zu\t%s\n", big, ltl, n, ft_strnstr(big, ltl, n));
	free(ltl);
	free(big);
	big = (char *)NULL;
	ltl = strdup("");
	n = 0;
	printf("\nman\n");
	printf("%s\t%s\t%zu\t%s\n", big, ltl, n, strnstr(big, ltl, n));
	printf("\nft_\n");
	printf("%s\t%s\t%zu\t%s\n", big, ltl, n, ft_strnstr(big, ltl, n));
	free(ltl);
	free(big);
	big = (char *)NULL;
	ltl = (char *)NULL;
	n = 0;
	printf("\nman\n");
	printf("%s\t%s\t%zu\t%s\n", big, ltl, n, strnstr(big, ltl, n));
	printf("\nft_\n");
	printf("%s\t%s\t%zu\t%s\n", big, ltl, n, ft_strnstr(big, ltl, n));
	free(ltl);
	free(big);*/

	return 0;
}
