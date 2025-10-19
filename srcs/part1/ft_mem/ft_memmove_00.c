/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove_00.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keitotak <keitotak@student.42tokyo.jp      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 19:52:00 by keitotak          #+#    #+#             */
/*   Updated: 2025/10/19 20:24:41 by keitotak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	src_len;
	size_t	i;

	if (dest == NULL || src == NULL)
		return (NULL);
	src_len = ft_strlen(src);
	if ((src >= dest) || (src + src_len < dest))
		ft_memcpy(dest, src, n);
	i = 0;
	while (src[i] && i < n)
	{
		else
			dest[n - 1 - i] = src[n - 1 - i];
		i++;
	}
	return (dest);
}

/*not qualified. if n > sizeof(src), else way is not valid.*/
