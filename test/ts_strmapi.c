
#include "libft.h"
#include <stdio.h>

char	to_upper(unsigned int indent, char c)
{
	(void)indent;
	if (ft_isalpha(c))
		return (ft_toupper(c));
	return (c);
}

int	main(void)
{
	char	*mp;
	char	*s;

	s = ft_strdup("KeoirjfadfaRFerfe4joiwqr92057f+3");
	if (!s)
		return 1;
	mp = ft_strmapi(s, to_upper);
	if (!mp)
		return 1;
	printf("%s\t%s\n", s, mp);
	free(s);
	free(mp);
	
	s = ft_strdup("qwertyuiopasdfghjklzxcvbnm");
	if (!s)
		return 1;
	mp = ft_strmapi(s, to_upper);
	if (!mp)
		return 1;
	printf("%s\t%s\n", s, mp);
	free(s);
	free(mp);

	s = ft_strdup("1234567890");
	if (!s)
		return 1;
	mp = ft_strmapi(s, to_upper);
	if (!mp)
		return 1;
	printf("%s\t%s\n", s, mp);
	free(s);
	free(mp);

	s = ft_strdup("");
	if (!s)
		return 1;
	mp = ft_strmapi(s, to_upper);
	if (!mp)
		return 1;
	printf("%s\t%s\n", s, mp);
	free(s);
	free(mp);


	return 0;
}

