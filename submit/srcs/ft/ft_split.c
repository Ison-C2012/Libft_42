/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keitotak <keitotak@student.42tokyo.jp      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 12:59:58 by keitotak          #+#    #+#             */
/*   Updated: 2025/10/23 04:58:41 by keitotak         ###   ########.fr       */
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

static char	*get_substr(char const *s, size_t *p_end, char c)
{
	size_t	bgn;

	bgn = *p_end;
	while (s[bgn] && s[bgn] == c)
		bgn++;
	*p_end = bgn;
	while (s[*p_end] && s[*p_end] != c)
		*p_end += 1;
	return (ft_substr(s, bgn, *p_end - bgn + 1));
}

char	**ft_split(char const *s, char c)
{
	char	**sp;
	size_t	end;
	size_t	i;

	if (s == NULL)
		return (NULL);
	sp = (char **)ft_calloc(word_count(s, c) + 1, sizeof(char *));
	if (sp == NULL)
		return (NULL);
	end = 0;
	i = 0;
	while (sp[i] && s[end])
	{
		sp[i] = get_substr(s, &end, c);
		if (sp[i] == NULL)
			return (ft_free(sp));
		i++;
	}
	sp[i] = NULL;
	return (sp);
}
