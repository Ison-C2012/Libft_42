/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keitotak <keitotak@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 22:43:36 by keitotak          #+#    #+#             */
/*   Updated: 2025/10/17 23:00:57 by keitotak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	size_t	i;
	size_t	s_len;

	i = 0;
	if (s == NULL)
		return (NULL);
	s_len = ft_strlen(s);
	if (c == '\0')
		return (&s[s_len]);
	while (i < s_len)
	{
		if (s[i] == c)
			return (&s[i]);
		i++;
	}
	return (NULL);
}
