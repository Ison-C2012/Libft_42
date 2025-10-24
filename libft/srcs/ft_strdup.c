/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keitotak <keitotak@student.42tokyo.jp      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 11:50:43 by keitotak          #+#    #+#             */
/*   Updated: 2025/10/24 01:58:44 by keitotak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*d;
	size_t	s_len;

	s_len = ft_strlen(s);
	d = (char *)ft_calloc(s_len + 1, sizeof(char));
	if (d == NULL)
		return (NULL);
	ft_memcpy(d, s, s_len);
	return (d);
}
