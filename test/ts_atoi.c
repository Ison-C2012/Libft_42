#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

#include "libft.h"

int	main(void)
{
	/*std check*/
/*	printf("%s to %d\n", "", ft_atoi(""));
	printf("%s to %d\n", "     \t \r -0000909xxfjea8842", ft_atoi("     \t \r -0000909xxfjea8842"));
	printf("%s to %d\n", "     \t \r +0000909xxfjea8842", ft_atoi("     \t \r +0000909xxfjea8842"));
	printf("%s to %d\n", "     \t \r -+0000909xxfjea8842", ft_atoi("     \t \r -+0000909xxfjea8842"));
	printf("%s to %d\n", "     \t \r -----0000909xxfjea8842", ft_atoi("     \t \r -+0000909xxfjea8842"));
	printf("%s to %d\n", "11111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111", ft_atoi("11111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111"));
	printf("%s to %d\n", "-11111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111", ft_atoi("-11111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111"));
	printf("%s to %d\n", (char *)NULL, ft_atoi((char*)NULL));
*/

	printf("check manual\n");
	printf("%s\t%d\n", "     \t \r -0xxx", atoi("     \t \r -0xxx"));
	printf("%s\t%d\n", "     \t \r -2147483648", atoi("     \t \r -2147483648"));
	printf("%s\t%d\n", "     \t \r -2147483649", atoi("     \t \r -2147483649"));
	printf("%s\t%d\n", "     \t \r -2147483650", atoi("     \t \r -2147483650"));
	printf("%s\t%d\n", "     \t \r 2147483648", atoi("     \t \r 2147483648"));

	printf("\ncheck ft_\n");
	printf("%s\t%d\n", "     \t \r -0xxx", ft_atoi("     \t \r -0xxx"));
	printf("%s\t%d\n", "     \t \r -2147483648", ft_atoi("     \t \r -2147483648"));
	printf("%s\t%d\n", "     \t \r -2147483649", ft_atoi("     \t \r -2147483649"));
	printf("%s\t%d\n", "     \t \r -2147483650", ft_atoi("     \t \r -2147483650"));
	printf("%s\t%d\n", "     \t \r 2147483648", ft_atoi("     \t \r 2147483648"));

	return 0;
}
