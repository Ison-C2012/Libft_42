/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keitotak <keitotak@student.42tokyo.jp      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 12:59:58 by keitotak          #+#    #+#             */
/*   Updated: 2025/10/23 04:00:09 by keitotak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	word_count(char const *s, char c)
{
	size_t	cnt;
	size_t	i;
	int		flg;

	cnt = 0;
	i = 0;
	flg = 1;
	while (s[i])
	{
		if (s[i] == c)
			flg = 1;
		else
		{
			if (flg == 1)
				cnt++;
			flg = 0;
		}
		i++;
	}
	return (cnt);
}

static char	**ft_free(char **s)
{
	size_t	i;

	i = 0;
	while (s[i])
		free(s[i++]);
	free(s);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**sp;
	size_t	wcnt;
	size_t	i;

	if (s == NULL)
		return (NULL);
	wcnt = word_count(s, c);
	sp = (char **)ft_calloc(wcnt + 1, sizeof(char));
	if (sp == NULL)
		return (NULL);
	i = 0;
	while (wcnt-- && *s)
	{
		if (*s == c)
			s++;
		else
		{
			
			sp[i] = ft_substr(s, 0, ft_strchr(s, c) - s);
			if (sp[i] == NULL)
				return (ft_free(sp));
			s += ft_strchr(s, c) - s;
			i++;
		}
	}
	sp[i] = NULL;
	return (sp);
}
