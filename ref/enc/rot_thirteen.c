

char	rot(unsigned int i, char c)
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

