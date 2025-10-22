

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	main(void)
{
	char	*str;
	char	*set;

	str = strdup("");
	set = strdup("");
	printf("%s\t%s\t%s\n", str, set, ft_strtrim(str, set));
	free(str);
	free(set);

	str = strdup("");
	set = strdup("abc");
	printf("%s\t%s\t%s\n", str, set, ft_strtrim(str, set));
	free(str);
	free(set);

	str = strdup("abc");
	set = strdup("");
	printf("%s\t%s\t%s\n", str, set, ft_strtrim(str, set));
	free(str);
	free(set);

	str = strdup("abc");
	set = strdup("b");
	printf("%s\t%s\t%s\n", str, set, ft_strtrim(str, set));
	free(str);
	free(set);

	str = strdup("abc");
	set = strdup("bcd");
	printf("%s\t%s\t%s\n", str, set, ft_strtrim(str, set));
	free(str);
	free(set);

}
