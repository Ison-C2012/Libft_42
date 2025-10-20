
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int	main(void)
{
	char	*ar=(char *)calloc(sizeof(char), 10);
	printf("%s\n", ar);
	free(ar);
	ar=(char *)calloc(INT_MAX, 2);
	printf("%s\n", ar);
	return 0;
}
