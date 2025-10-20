/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keitotak <keitotak@student.42tokyo.jp      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 14:04:02 by keitotak          #+#    #+#             */
/*   Updated: 2025/10/20 19:52:10 by keitotak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* What for is this ft? */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*mp;
	size_t	mp_len;
	size_t	i;

	mp_len = ft_strlen(s);
	mp = (char *)malloc(sizeof(char) * (mp_len + 1));
	if (mp == NULL)
		return (NULL);
	i = 0;
	while (s[i])
	{
		mp[i] = f(i, s[i]);
		i++;
	}
	return (mp);
}
