/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keitotak <keitotak@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 23:05:24 by keitotak          #+#    #+#             */
/*   Updated: 2025/10/22 17:57:57 by keitotak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	l_len;

	if (big == NULL || little == NULL)
		return (NULL);
	if (*little == '\0')
		return ((char *)big);
	i = 0;
	l_len = ft_strlen(little);
	while (*big && i + l_len <= len)
	{
		j = 0;
		while (*(big + j) && i + j < len && *(big + j) == little[j])
			j++;
		if (little[j] == '\0')
			return ((char *)big);
		big++;
		i++;
	}
	return (NULL);
}
