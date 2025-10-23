/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keitotak <keitotak@student.42tokyo.jp      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 11:43:16 by keitotak          #+#    #+#             */
/*   Updated: 2025/10/24 02:13:52 by keitotak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	bgn;
	size_t	end;

	bgn = 0;
	while (s1[bgn] && ft_strchr(set, s1[bgn]))
		bgn++;
	end = ft_strlen(s1);
	while (end && ft_strchr(set, s1[end]))
		end--;
	if (bgn > end)
		return (ft_calloc(1, sizeof(char)));
	return (ft_substr(s1, bgn, end - bgn + 1));
}
