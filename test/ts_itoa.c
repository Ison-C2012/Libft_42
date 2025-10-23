
#include "libft.h"

#include <stdio.h>

int	main(void)
{
	int n;

	n = INT_MIN;
	printf("%d\t%s\n", n, ft_itoa(n));
	n = INT_MAX;
	printf("%d\t%s\n", n, ft_itoa(n));
	n = 0;
	printf("%d\t%s\n", n, ft_itoa(n));
	n = 9;
	printf("%d\t%s\n", n, ft_itoa(n));

}
