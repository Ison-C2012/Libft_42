
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "libft.h"

int	main(void)
{
	char	**pp;
	size_t	i;

	pp = ft_split("hello,42,see,you,waseda", ',');
	if (pp == NULL)
		return (-1);
	printf("%s\n", pp[0]);

/*
	i = 0;
	while (pp[i])
	{
		printf("%s\t", pp[i]);
		free(pp[i++]);
	}
	free(pp);
*/
	return (0);
}
