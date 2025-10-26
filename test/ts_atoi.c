#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

#include "libft.h"

int	main(void)
{
	/*std check*/
	printf("check manual\n");
	printf("%s to %d\n", "     \t \r -0000909xxfjea8842", atoi("     \t \r -0000909xxfjea8842"));
	printf("%s to %d\n", "     \t \r +0000909xxfjea8842", atoi("     \t \r +0000909xxfjea8842"));
	printf("%s to %d\n", "     \t \r -----0000909xxfjea8842", atoi("     \t \r -+0000909xxfjea8842"));
	printf("%s to %d\n", "", atoi(""));
	/*LONG_MAX check*/
	printf("%s to %d\n", "9223372036854775806", atoi("9223372036854775806"));
	printf("%s to %d\n", "9223372036854775807", atoi("9223372036854775807"));
	printf("%s to %d\n", "9223372036854775808", atoi("9223372036854775808"));
	printf("%s to %d\n", "9223372036854775809", atoi("9223372036854775809"));
	printf("%s to %d\n", "9223372036854775810", atoi("9223372036854775810"));
	/*LONG_MIN check*/
	printf("%s to %d\n", "-9223372036854775807", atoi("-9223372036854775807"));
	printf("%s to %d\n", "-9223372036854775808", atoi("-9223372036854775808"));
	printf("%s to %d\n", "-9223372036854775809", atoi("-9223372036854775809"));
	printf("%s to %d\n", "-9223372036854775810", atoi("-9223372036854775810"));

//	printf("%s to %d\n", (char *)NULL, atoi((char*)NULL));

	printf("%s\t%d\n", "     \t \r -0xxx", atoi("     \t \r -0xxx"));
	printf("%s\t%d\n", "     \t \r -2147483648", atoi("     \t \r -2147483648"));
	printf("%s\t%d\n", "     \t \r -2147483649", atoi("     \t \r -2147483649"));
	printf("%s\t%d\n", "     \t \r -2147483650", atoi("     \t \r -2147483650"));
	printf("%s\t%d\n", "     \t \r 2147483648", atoi("     \t \r 2147483648"));

	/*std check*/
	printf("\ncheck ft_\n");
	printf("%s to %d\n", "     \t \r -0000909xxfjea8842", ft_atoi("     \t \r -0000909xxfjea8842"));
	printf("%s to %d\n", "     \t \r +0000909xxfjea8842", ft_atoi("     \t \r +0000909xxfjea8842"));
	printf("%s to %d\n", "     \t \r -----0000909xxfjea8842", ft_atoi("     \t \r -+0000909xxfjea8842"));
	printf("%s to %d\n", "", ft_atoi(""));
	/*LONG_MAX check*/
	printf("%s to %d\n", "9223372036854775806", ft_atoi("9223372036854775806"));
	printf("%s to %d\n", "9223372036854775807", ft_atoi("9223372036854775807"));
	printf("%s to %d\n", "9223372036854775808", ft_atoi("9223372036854775808"));
	printf("%s to %d\n", "9223372036854775809", ft_atoi("9223372036854775809"));
	printf("%s to %d\n", "9223372036854775810", ft_atoi("9223372036854775810"));
	/*LONG_MIN check*/
	printf("%s to %d\n", "-9223372036854775807", ft_atoi("-9223372036854775807"));
	printf("%s to %d\n", "-9223372036854775808", ft_atoi("-9223372036854775808"));
	printf("%s to %d\n", "-9223372036854775809", ft_atoi("-9223372036854775809"));
	printf("%s to %d\n", "-9223372036854775810", ft_atoi("-9223372036854775810"));

	/*NULL check*/
//	printf("%s to %d\n", (char *)NULL, ft_atoi((char*)NULL));

	/*INT check*/
	printf("%s\t%d\n", "     \t \r -0xxx", ft_atoi("     \t \r -0xxx"));
	printf("%s\t%d\n", "     \t \r -2147483648", ft_atoi("     \t \r -2147483648"));
	printf("%s\t%d\n", "     \t \r -2147483649", ft_atoi("     \t \r -2147483649"));
	printf("%s\t%d\n", "     \t \r -2147483650", ft_atoi("     \t \r -2147483650"));
	printf("%s\t%d\n", "     \t \r 2147483648", ft_atoi("     \t \r 2147483648"));
	return 0;
}
