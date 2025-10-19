/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keitotak <keitotak@student.42tokyo.jp      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 19:56:37 by keitotak          #+#    #+#             */
/*   Updated: 2025/10/20 00:30:20 by keitotak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;

	if (dest == NULL || src == NULL)
		return (NULL);
	if (n == 0)
		return (NULL);
	i = 0;
	if (dest <= src)
		ft_memcpy(dest, src, n);
	else
	{
		while (dest[i] && i < n)
		{
			dest[n - i] = src[n - i];
			i++;
		}
	}
	return (dest);
}

/* n must not be greater than src_size and dest_size. */
