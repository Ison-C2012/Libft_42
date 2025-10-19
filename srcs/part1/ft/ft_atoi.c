/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keitotak <keitotak@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 00:53:36 by keitotak          #+#    #+#             */
/*   Updated: 2025/10/20 01:00:07 by keitotak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspace(char c)
{
	return (c == ' ' || (c >= '\t' && c <= '\r'));
}

static int	ft_issign(char c)
{
	return (c == '+' || c == '-');
}

static int	out_of_int(unsigned int nbr)
{
	return (nbr > -INT_MIN);
}

static int	get_return_nb(unsigned int nb, int sg)
{
	long long	r_nb;

	r_nb = sg * nb;
	if (r_nb > INT_MAX)
		return (INT_MAX);
	if (r_nb < INT_MIN)
		return (INT_MIN);
	return (r_nb);
}

int	ft_atoi(const char *nptr)
{
	unsigned int	nb;
	int				sg;

	if (nptr == NULL)
		return (0);
	i = 0;
	while (ft_isspace(nptr[i++]))
		;
	sg = 1;
	if (ft_issign(nptr[i]))
	{
		if (nptr[i++] == '-')
			sg *= -1;
	}
	nb = 0;
	while (ft_isnum(nptr[i]))
	{
		nb *= 10;
		nb += nptr[i] - '0';
		i++;
	}
	return (get_return_nb(nb, sg));
}

/*
   how do you deal with greater nb than uint?
   is is necessary to code ft to check overflow before it occurs?
*/
