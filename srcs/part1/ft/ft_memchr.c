/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keitotak <keitotak@student.42tokyo.jp      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 19:31:00 by keitotak          #+#    #+#             */
/*   Updated: 2025/10/19 00:34:40 by keitotak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	if (s == NULL)
		return (NULL);
	i = 0;
	while (i < n)
	{
		if ((unsigned char)s[i] == (unsigned char)c)
			return (&s[i]);
	}
	return (NULL);
}
