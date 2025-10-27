
#include <string.h>
#include <stdio.h>

int	main(void)
{
	char	dest[100];
	char	*ptr;
	bzero(dest, 100);
	ptr = (char *)memcpy(dest, "coucou", 0);
	printf("%s\n", ptr);
	bzero(dest, 100);
	ptr = (char *)memcpy(dest, NULL, 0);
	printf("%s\n", ptr);
	bzero(dest, 100);
	ptr = (char *)memcpy(dest, "coucou", 10);
	printf("%s\n", ptr);
	bzero(dest, 100);
	ptr = (char *)memcpy(NULL, "coucou", 6);
	printf("%s\n", ptr);


}
