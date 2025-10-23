
#include <string.h>
#include <stdio.h>

int	main(void)
{
	char	dest[100];
	char	*ptr;
	memset(dest, 'k', 100);
	ptr = (char *)memcpy(dest, "coucou", 0);
	printf("%s\n", ptr);
	ptr = (char *)memcpy(dest, NULL, 0);
	printf("%s\n", ptr);
}
