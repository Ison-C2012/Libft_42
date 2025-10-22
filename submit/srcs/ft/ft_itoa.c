/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keitotak <keitotak@student.42tokyo.jp      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 19:46:52 by keitotak          #+#    #+#             */
/*   Updated: 2025/10/23 05:28:51 by keitotak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	get_len(int n)
{
	size_t	s;

	s = 0;
	if (n < 0)
		s++;
	while (n)
	{
		n /= 10;
		s++;
	}
	return (s);
}

char	*ft_itoa(int n)
{
	char	*str;
	long	nbr;
	size_t	indent;

	if (n == 0)
		return (ft_strdup("0"));
	str = (char *)ft_calloc(get_len(n) + 1, sizeof(char));
	if (str == NULL)
		return (NULL);
	nbr = (long)n;
	indent = get_len(nbr);
	str[indent--] = '\0';
	if (nbr < 0)
	{
		nbr *= -1;
		str[0] = '-';
	}
	while (nbr)
	{
		str[indent--] = '0' + (nbr % 10);
		nbr /= 10;
	}
	return (str);
}
