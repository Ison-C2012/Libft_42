
#include <stdio.h>

char	c_cipher(unsigned int i, char c)
{
	(void)i;
	if (ft_isalpha(c))
		return (c - 3);
	return (c);
}

int	main(void)
{
	char *s="Rnpu cebwrpg va gur 42 Pbzzba Pber pbagnvaf na rapbqrq uvag.";
	char *ans=ft_strmapi(s, c_cipher);
	printf("\n%s\n", s);
	printf("\n%s\n", ans);
	free(ans);
	return 0;
}

