/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keitotak <keitotak@student.42tokyo.jp      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 11:10:42 by keitotak          #+#    #+#             */
/*   Updated: 2025/10/24 02:10:24 by keitotak         ###   ########.fr       */
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
	size_t	sb_len;

	sb_len = get_len(ft_strlen(s), start, len);
	if (sb_len == 0)
		return (ft_calloc(1, sizeof(char)));
	sb = (char *)ft_calloc(sb_len + 1, sizeof(char));
	if (sb == NULL)
		return (NULL);
	ft_memcpy(sb, s + start, sb_len);
	return (sb);
}
