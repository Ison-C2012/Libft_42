
#include <stdlib.h>
#include <stdio.h>
#include "libft.h" 

int	main(void)
{
	char	*ptr;

/*	ptr = ft_strchr("test", '\0');
	printf("%s, %p", ptr, &ptr);
*/	ptr = ft_strchr("test", 1024);
	printf("%s, %p", ptr, ptr);

}
