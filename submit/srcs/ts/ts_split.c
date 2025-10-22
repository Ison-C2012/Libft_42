
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "libft.h"

int	main(void)
{
	char	**pp;

	pp = ft_split("hello,42,see,you,waseda", ',');
	if (pp == NULL)
		return (-1);
	while (pp)
		printf("%s\t", *pp++);
	free(pp);
	return (0);
}
