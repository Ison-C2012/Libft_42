/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keitotak <keitotak@student.42tokyo.jp      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 11:10:42 by keitotak          #+#    #+#             */
/*   Updated: 2025/10/23 02:13:46 by keitotak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	get_len(size_t s_len, unsigned int start, size_t len)
{
	if (len == 0)
		return (0);
	if (start + len > s_len)
	{
		if (start > s_len)
			return (0);
		return (s_len - start);
	}
	else
		return (len);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sb;
	size_t	s_len;

	if (s == NULL)
		return (NULL);
	s_len = get_len(ft_strlen(s), start, len);
	if (s_len == 0)
		return ((char *)ft_calloc(1, sizeof(char)));
	sb = (char *)ft_calloc(s_len + 1, sizeof(char));
	if (sb == NULL)
		return (NULL);
	ft_strlcpy(sb, s + start, s_len + 1);
	return (sb);
}
