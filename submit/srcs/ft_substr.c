/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keitotak <keitotak@student.42tokyo.jp      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 11:10:42 by keitotak          #+#    #+#             */
/*   Updated: 2025/10/22 09:11:11 by keitotak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*subs;

	if (s == NULL)
		return (NULL);
	if (start >= ft_strlen(s) || len == SIZE_MAX)
		return ((char *)ft_calloc(sizeof(char), 1));
	subs = (char *)ft_calloc(sizeof(char), len + 1);
	if (subs == NULL)
		return (NULL);
	ft_strlcpy(subs, s + start, len + 1);
	return (subs);
}
