
#include <string.h>
#include <stdio.h>

int	main(void)
{
	printf("%d\n", strncmp("abcdef", "abc\375xx", 5));
}
