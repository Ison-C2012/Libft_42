#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

#include "libft.h"

int	main(void)
{
	printf("%s to %d\n", "", ft_atoi(""));
	printf("%s to %d\n", "     \t \r -0000909xxfjea8842", ft_atoi("     \t \r -0000909xxfjea8842"));
	printf("%s to %d\n", "     \t \r +0000909xxfjea8842", ft_atoi("     \t \r +0000909xxfjea8842"));
	printf("%s to %d\n", "     \t \r -+0000909xxfjea8842", ft_atoi("     \t \r -+0000909xxfjea8842"));
	printf("%s to %d\n", "     \t \r -----0000909xxfjea8842", ft_atoi("     \t \r -+0000909xxfjea8842"));
	printf("%s to %d\n", "11111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111", ft_atoi("11111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111"));
	printf("%s to %d\n", "-11111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111", ft_atoi("-11111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111"));
	printf("%s to %d\n", (char *)NULL, ft_atoi((char*)NULL));
	return 0;
}
