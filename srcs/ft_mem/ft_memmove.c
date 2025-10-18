/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keitotak <keitotak@student.42tokyo.jp      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 19:52:00 by keitotak          #+#    #+#             */
/*   Updated: 2025/10/19 00:38:09 by keitotak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;

	if (dest == NULL || src == NULL)
		return (NULL);
	i = 0;
	while (src[i] && i < n)
	{
		if (dest - src < 0)
			dest[i] = src[i];
		else
			dest[n - 1 - i] = src[n - 1 - i];
		i++;
	}
	return (dest);
}

/*not qualified. if n > sizeof(src), else way is not valid.*/
