/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keitotak <keitotak@student.42tokyo.jp      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 14:04:02 by keitotak          #+#    #+#             */
/*   Updated: 2025/10/23 18:32:48 by keitotak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* What for is this ft? */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*mp;
	size_t	i;

	mp = (char *)calloc(ft_strlen(s) + 1, sizeof(char));
	if (mp == NULL)
		return (NULL);
	i = 0;
	while (s[i])
	{
		mp[i] = f(i, s[i]);
		i++;
	}
	mp[i] = '\0';
	return (mp);
}
