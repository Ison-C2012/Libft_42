
#include <stdio.h>

int	main(void)
{
	char *s1="Hello";
	char *s2="hello";

	printf("s1:%p\n", s1);
	printf("s2:%p\n", s2);
	printf("s1-s2:%ld\n", s1 - s2);
	return 0;
}
