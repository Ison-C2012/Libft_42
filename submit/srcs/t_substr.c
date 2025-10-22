

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	printf("%s\t%d\t%d\t%s\n", "alo", 0, 2, ft_substr("alo", 0, 2));
	printf("%s\t%d\t%d\t%s\n", "alo", 1, 2, ft_substr("alo", 1, 2));
	printf("%s\t%d\t%d\t%s\n", "alo", 2, 2, ft_substr("alo", 2, 2));
	printf("%s\t%d\t%d\t%s\n", "alo", 3, 2, ft_substr("alo", 3, 2));
	printf("%s\t%d\t%d\t%s\n", "alo", 4, 2, ft_substr("alo", 4, 2));
	printf("%s\t%d\t%d\t%s\n", "alo", 0, 2, ft_substr("alo", 0, SIZE_MAX));
}
