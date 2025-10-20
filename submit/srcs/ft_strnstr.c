/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keitotak <keitotak@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 23:05:24 by keitotak          #+#    #+#             */
/*   Updated: 2025/10/20 15:37:47 by keitotak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	little_len;

	if (big == NULL || little == NULL)
		return (NULL);
	i = 0;
	j = 0;
	little_len = ft_strlen(little);
	while (big[i] && i < len)
	{
		while (big[i + j] && big[i + j] == little[j])
			j++;
		if (j == little_len)
			return ((char *)big + i);
		j = 0;
		i++;
	}
	return (NULL);
}
