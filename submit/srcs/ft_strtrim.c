/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keitotak <keitotak@student.42tokyo.jp      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 11:43:16 by keitotak          #+#    #+#             */
/*   Updated: 2025/10/20 19:12:11 by keitotak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	get_len_tr(const char *s, const char *set)
{
	size_t	cnt;

	cnt = 0;
	while (*s)
	{
		if (ft_strncmp(s, set, ft_strlen(set)) == 0)
		{
			cnt++;
			s += ft_strlen(set);
		}
		else
			s++;
	}
	return (ft_strlen(s) - ft_strlen(set) * cnt);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*tr;
	size_t	tr_len;
	size_t	j;

	if (s1 == NULL || set == NULL)
		return (NULL);
	tr_len = get_len_tr(s1, set);
	tr = (char *)malloc(sizeof(char) * (tr_len + 1));
	if (tr == NULL)
		return (NULL);
	j = 0;
	while (tr_len--)
	{
		if (ft_strncmp(s1, set, ft_strlen(set)))
			tr[j] = *s1++;
		else
			s1 += ft_strlen(set);
		j++;
	}
	return (tr);
}
