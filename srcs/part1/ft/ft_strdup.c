/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keitotak <keitotak@student.42tokyo.jp      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 11:50:43 by keitotak          #+#    #+#             */
/*   Updated: 2025/10/19 00:55:26 by keitotak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*d;
	size_t	s_len;
	size_t	d_size;

	if (s == NULL)
		return (NULL);
	s_len = ft_strlen(s);
	d_size = s_len + 1;
	d = (char *)malloc(sizeof(char) * (d_size));
	if (d == NULL)
		return (NULL);
	ft_strlcpy(d, s, d_size);
	return (d);
}
