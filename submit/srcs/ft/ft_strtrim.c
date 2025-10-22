/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keitotak <keitotak@student.42tokyo.jp      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 11:43:16 by keitotak          #+#    #+#             */
/*   Updated: 2025/10/22 22:52:07 by keitotak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	strlen_set(char const *s1, char const *set)
{
	size_t	len;

	len = 0;
	while (s1[len] && ft_strchr(set, s1[len]) == NULL)
		len++;
	return (len);
}

/*
static size_t	get_len(const char *s1, const char *set)
{
	size_t	len;

	len = 0;
	while (*s1)
	{
		len += strlen_set(s1, set);
		s1 += strlen_set(s1, set);
		while (ft_strchr(set, *s1))
			s1++;
	}
	return (len);
}
*/

static size_t	get_len(const char *s1, const char *set)
{
	size_t	len;

	len = 0;
	while (*s1)
	{
		if (ft_strchr(set, *s1) == NULL)
			len++;
		s1++;
	}
	return (len);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*tr;
	size_t	len;
	size_t	size;

	if (s1 == NULL || set == NULL)
		return (NULL);
	if (*s1 == '\0')
		return (ft_calloc(1, sizeof(char)));
	if (*set == '\0')
		return (ft_strdup(s1));

}
