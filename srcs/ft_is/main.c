#include <stdio.h>

int	ft_isalpha(int c);
int	ft_isalnum(int c);
int	ft_isascii(int c);

int	main(void)
{
	printf("%d\n", ft_isalpha('a'));
	printf("%d\n", ft_isalpha('-'));
	printf("%d\n", ft_isalpha(90));
	printf("%d\n", ft_isalpha(96));
	printf("%d\n", ft_isalpha(97));
	printf("%d\n", ft_isalnum(97));
	printf("%d\n", ft_isalnum('9'));
	printf("%d\n", ft_isalnum(EOF));
	printf("%d\n", ft_isascii(EOF));
	printf("%d\n", ft_isascii('~'));
	printf("%d\n", ft_isascii(0));
	printf("%d\n", ft_isascii(128));
	return 0;
}
