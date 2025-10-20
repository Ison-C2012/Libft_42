/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keitotak <keitotak@student.42tokyo.jp      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 19:46:52 by keitotak          #+#    #+#             */
/*   Updated: 2025/10/20 14:19:27 by keitotak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	get_size_nb(int n)
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
	size_t	size;
	size_t	i;

	size = get_size_nb(n);
	nb = (char *)malloc(sizeof(char) * (size + 1));
	nbr = (long)n;
	if (nbr < 0)
	{
		nb[0] = '-';
		nbr *= -1;
		size--;
	}
	i = 0;
	while (i < size)
	{
		nb[size - i] = (n % 10);
		n /= 10;
	}
	return (nb);
}
