/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keitotak <keitotak@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 00:53:36 by keitotak          #+#    #+#             */
/*   Updated: 2025/10/19 18:30:49 by keitotak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspace(char c)
{
	return (c == ' ' || c >= '\t' && c <= '\r'); 
}

static int	ft_issign(char c)
{
	return (c == '+' || c == '-');
}

static int	out_of_int(unsigned int nbr)
{
	return (nbr > -INT_MIN);
}

int	ft_atoi(const char *nptr)
{
	unsigned int	nb;
	int				sg;

	if (nptr == NULL)
		return (0);
	i = 0;
	while (ft_isspace(nptr[i++]));
	sg = 1;
	if (ft_issign(nptr[i]))
	{
		if (nptr[i++] == '-')
			sg *= -1;
	}
	nb = 0;
	while (ft_isnum(nptr[i]))
		nb = nb * 10 + (nptr[i++] - '0');
	if (out_of_int(nb))
	{
		if (sg > 0)
			return (INT_MAX);
		else
			return (INT_MIN);
	}
	return (sg * nb);
}
