/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keitotak <keitotak@student.42tokyo.jp      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 12:59:58 by keitotak          #+#    #+#             */
/*   Updated: 2025/10/23 03:24:48 by keitotak         ###   ########.fr       */
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

static size_t	ft_strlen_c(const char *s, char c)
{
	size_t	len;

	len = 0;
	while (s[len] && s[len] != c)
		len++;
	return (len);
}

static char	*ft_strndup(const char *s, size_t n)
{
	char	*d;

	d = (char *)ft_calloc(sizeof(char), n + 1);
	if (d == NULL)
		return (NULL);
	ft_strlcpy(d, s, n + 1);
	return (d);
}

char	**ft_split(char const *s, char c)
{
	char	**sp;
	size_t	wcnt;
	size_t	i;

	if (s == NULL)
		return (NULL);
	wcnt = word_count(s, c);
	sp = (char **)ft_calloc(sizeof(char), wcnt + 1);
	if (sp == NULL)
		return (NULL);
	i = 0;
	while (wcnt-- && *s)
	{
		if (*s == c)
			s++;
		else
		{
			sp[i] = ft_strndup(s, ft_strlen_c(s, c));
			if (sp[i] == NULL)
				return (ft_free(sp));
			s += ft_strlen_c(s, c);
		}
	}
	sp[i] = NULL;
	return (sp);
}
