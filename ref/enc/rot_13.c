#include "libft.h"
#include <stdio.h>

// rot13 encrypted.
#define CSR 13
#define RNG 26
char	rot_thirteen(unsigned int i, char c)
{
	(void)i;
	if (ft_isalpha(c))
	{
		if (ft_isalpha(c + CSR%RNG))
			return (c + CSR%RNG);
		else
		{
			if (CSR < 0)
				return (c + CSR%RNG + RNG);
			else
				return (c + CSR%RNG - RNG);
		}
	}
	return (c);
}

int	main(void)
{
	char *s="Rnpu cebwrpg va gur 42 Pbzzba Pber pbagnvaf na rapbqrq uvag. Sbe rnpu pvepyr, bayl bar cebwrpg cebivqrf gur pbeerpg uvag arrqrq sbe gur arkg pvepyr. Guvf punyyratr vf vaqvivqhny, jvgu n svany cevmr sbe bar fghqrag. Fgnss zrzoref znl cnegvpvcngr ohg ner abg ryvtvoyr sbe n cevmr. Ner lbh nzbat gur irel svefg gb fbyir n pvepyr? Fraq gur uvagf jvgu rkcynangvbaf gb by@42.se gb or nqqrq gb gur yrnqreobneq. Gur uvag sbe guvf svefg cebwrpg, juvpu znl pbagnva nantenzzrq jbeqf, vf: Jbys bs ntragvir cnegvpyrf gung qvfcebir terral gb lbhe ubzrf qan gung cebjfr lbhe fgbby";
	char *ans=ft_strmapi(s, rot_thirteen);
	printf("\n%s\n", s);
	printf("\n%s\n", ans);
	free(ans);
	return 0;
}

