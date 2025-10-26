/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keitotak <keitotak@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 00:53:36 by keitotak          #+#    #+#             */
/*   Updated: 2025/10/23 22:57:48 by keitotak         ###   ########.fr       */
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

static int	get_nb(const char *nptr)
{
	int		nb;
	int		sg;

	sg = 1;
	if (ft_issign(*nptr))
	{
		if (*nptr == '-')
			sg *= -1;
		nptr += 1;
	}
	nb = 0;
	while (ft_isdigit(*nptr))
	{
		nb *= 10;
		nb += (*nptr - '0') * sg;
		nptr++;
	}
	return (nb);
}

int	ft_atoi(const char *nptr)
{
	if (nptr == NULL)
		return (0);
	while (ft_isspace(*nptr))
		nptr++;
	return (get_nb(nptr));
}

/*
   how do you deal with greater nb than int?
   	the manual says atoi doesn't detect error.
   	atoi works to deal with nbr_string as type of int.
   is is necessary to code ft to check overflow before it occurs?
   	no. the nbr is dealed as int, and loop on int.
*/
