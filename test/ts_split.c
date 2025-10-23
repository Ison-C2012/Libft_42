
#include <stdio.h>

#include "libft.h"

static char	**ft_free(char **s)
{
	size_t	i;

	i = 0;
	while (s[i])
		free(s[i++]);
	free(s);
	return (NULL);
}

int	main(void)
{
	char	**pp;

	pp = ft_split("hello,42,see,you,waseda", ',');
	if (pp == NULL)
		return (-1);
	for (int i=0;pp[i];i++)
		printf("%s\n", pp[i]);
	ft_free(pp);

	pp = ft_split(",hello,42,see,you,waseda", ',');
	if (pp == NULL)
		return (-1);
	for (int i=0;pp[i];i++)
		printf("%s\n", pp[i]);
	ft_free(pp);

	pp = ft_split("hello,42,see,you,waseda,", ',');
	if (pp == NULL)
		return (-1);
	for (int i=0;pp[i];i++)
		printf("%s\n", pp[i]);
	ft_free(pp);

	pp = ft_split("hello,42,,,,,,see,you,waseda", ',');
	if (pp == NULL)
		return (-1);
	for (int i=0;pp[i];i++)
		printf("%s\n", pp[i]);
	ft_free(pp);

	pp = ft_split("hello,,,42,,,,,,see,you,,waseda,,,,,,,", ',');
	if (pp == NULL)
		return (-1);
	for (int i=0;pp[i];i++)
		printf("%s\n", pp[i]);
	ft_free(pp);


	return (0);
}
