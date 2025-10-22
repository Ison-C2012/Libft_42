/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keitotak <keitotak@student.42tokyo.jp      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 19:46:52 by keitotak          #+#    #+#             */
/*   Updated: 2025/10/22 19:06:52 by keitotak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"



static size_t	get_len_nb(int n)
{
	size_t	s;

	if (n == INT_MIN)
		return (11);
	s = 0;
	if (n < 0)
	{
		s++;
		n *= -1;
	}
	while (n)
	{
		s++;
		n /= 10;
	}
	return (s);
}

char	*ft_itoa(int n)
{
	char	*nb;
	long	nbr;
	size_t	len;
	size_t	i;

	len = get_len_nb(n);
	nb = (char *)ft_calloc(len + 1, sizeof(char));
	if (nb == NULL)
		return (NULL);
	nbr = (long)n;
	i = 0;
	if (nbr < 0)
	{
		*nb = '-';
		nbr *= -1;
		i++;
	}
	nb += len;
	*nb-- = '\0';
	while (i < len)
	{
		*nb = '0' + (nbr % 10);
		nbr /= 10;
		nb--;
		i++;
	}
	return (nb);
}
