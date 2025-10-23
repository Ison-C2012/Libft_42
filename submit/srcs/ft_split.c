/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keitotak <keitotak@student.42tokyo.jp      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 12:59:58 by keitotak          #+#    #+#             */
/*   Updated: 2025/10/23 21:51:55 by keitotak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**ft_free(char **s)
{
	size_t	i;

	i = 0;
	while (s[i])
		free(s[i++]);
	free(s);
	return (NULL);
}

static size_t	word_count(char const *s, char c)
{
	size_t	cnt;
	int		flg;

	cnt = 0;
	flg = 1;
	while (*s)
	{
		if (*s == c)
			flg = 1;
		else
		{
			if (flg == 1)
				cnt++;
			flg = 0;
		}
		s++;
	}
	return (cnt);
}

char	**ft_split(char const *s, char c)
{
	char	**sp;
	size_t	wc;
	size_t	len;
	size_t	i;

	wc = word_count(s, c);
	sp = (char **)ft_calloc(wc + 1, sizeof(char *));
	if (sp == NULL)
		return (NULL);
	i = 0;
	while (*s && i < wc)
	{
		len = 0;
		while (*s && *s == c)
			s++;
		while (s[len] && s[len] != c)
			len++;
		sp[i] = ft_substr(s, 0, len);
		if (sp[i] == NULL)
			return (ft_free(sp));
		s += len;
		i++;
	}
	return (sp);
}
