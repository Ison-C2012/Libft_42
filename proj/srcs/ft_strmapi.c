/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keitotak <keitotak@student.42tokyo.jp      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 14:04:02 by keitotak          #+#    #+#             */
/*   Updated: 2025/10/26 16:03:18 by keitotak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* What for is this ft? */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char		*str;
	unsigned int	i;

	str = (char *)ft_calloc(ft_strlen(s) + 1, sizeof(char));
	if (str == NULL)
		return (NULL);
	i = 0;
	while (s[i])
	{
		str[i] = f(i, s[i]);
		i++;
	}
	return (str);
}
