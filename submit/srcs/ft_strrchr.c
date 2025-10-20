/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keitotak <keitotak@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 22:43:36 by keitotak          #+#    #+#             */
/*   Updated: 2025/10/20 15:39:38 by keitotak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	size_t	s_len;

	if (s == NULL)
		return (NULL);
	s_len = ft_strlen(s);
	if (c == '\0')
		return ((char *)s + s_len);
	i = 0;
	while (s[i] && i < s_len)
	{
		if (s[s_len - i] == c)
			return ((char *)s + (s_len - i));
		i++;
	}
	return (NULL);
}
