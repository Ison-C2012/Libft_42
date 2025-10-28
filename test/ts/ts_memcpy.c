
#include <stdio.h>
#include <string.h>

#include "libft.h"

int     main(void)
{
	char    dest[100];
	char    *ptr;
	
	bzero(dest, 100);
	ptr = (char *)memcpy(dest, "coucou", 0);
	printf("%s\t", ptr);
	bzero(dest, 100);
	ptr = (char *)ft_memcpy(dest, "coucou", 0);
	printf("%s\n", ptr);

	bzero(dest, 100);
	ptr = (char *)memcpy(dest, NULL, 0);
	printf("%s\t", ptr);
	bzero(dest, 100);
	ptr = (char *)ft_memcpy(dest, NULL, 0);
	printf("%s\n", ptr);
/*
	ptr = (char *)memcpy(NULL, "coucou", 0);
	printf("%s\t", ptr);
	ptr = (char *)ft_memcpy(NULL, "coucou", 0);
	printf("%s\n", ptr);

	ptr = (char *)memcpy(NULL, NULL, 0);
	printf("%s\t", ptr);
	ptr = (char *)ft_memcpy(NULL, NULL, 0);
	printf("%s\n", ptr);
*/
	bzero(dest, 100);
	ptr = (char *)memcpy(dest, "coucou", 10);
	printf("%s\t", ptr);
	bzero(dest, 100);
	ptr = (char *)ft_memcpy(dest, "coucou", 10);
	printf("%s\n", ptr);

	bzero(dest, 100);
	ptr = (char *)memcpy(dest, "coucou", strlen("coucou"));
	printf("%s\t", ptr);
	bzero(dest, 100);
	ptr = (char *)ft_memcpy(dest, "coucou", strlen("coucou"));
	printf("%s\n", ptr);

	bzero(dest, 100);
	ptr = (char *)memcpy(dest, "coucou", strlen("coucou") - 2);
	printf("%s\t", ptr);
	bzero(dest, 100);
	ptr = (char *)ft_memcpy(dest, "coucou", strlen("coucou") - 2);
	printf("%s\n", ptr);


}
