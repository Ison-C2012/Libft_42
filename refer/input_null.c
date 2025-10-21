
#include <stdio.h>
#include <stddef.h>

void	put(char *s)
{
	printf("%s\n", s);
}

int	main(void)
{
	put(NULL);
}
