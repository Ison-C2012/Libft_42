

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
/*	printf("%s\t%u\t%d\t%s\n", "alo", 0, 2, ft_substr("alo", 0, 2));
	printf("%s\t%u\t%d\t%s\n", "alo", 1, 2, ft_substr("alo", 1, 2));
	printf("%s\t%u\t%d\t%s\n", "alo", 2, 2, ft_substr("alo", 2, 2));
	printf("%s\t%u\t%d\t%s\n", "alo", 3, 2, ft_substr("alo", 3, 2));
	printf("%s\t%u\t%d\t%s\n", "alo", 4, 2, ft_substr("alo", 4, 2));
	printf("%s\t%u\t%lu\t%s\n", "alo", 0, ULONG_MAX, ft_substr("alo", 0, ULONG_MAX));
*/
	char	*ptr;
	unsigned int	stt;
	size_t	len;

	stt = 1;
	len = 1;
	ptr=ft_substr("", stt, len);
	printf("%s\t%u\t%zd\t%s\n", "", stt, len, ptr);
}
