/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keitotak <keitotak@student.42tokyo.jp      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 11:19:19 by keitotak          #+#    #+#             */
/*   Updated: 2025/10/20 14:16:51 by keitotak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	s1_len;
	size_t	s2_len;
	char	*jn;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	jn = (char *)malloc(sizeof(char) * (s1_len + s2_len + 1));
	if (jn == NULL)
		return (NULL);
	ft_strlcpy(jn, s1, s1_len + 1);
	ft_strlcat(jn, s2, s1_len + s2_len + 1);
	return (jn);
}
