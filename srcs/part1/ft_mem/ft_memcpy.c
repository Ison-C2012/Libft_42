/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keitotak <keitotak@student.42tokyo.jp      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 19:50:21 by keitotak          #+#    #+#             */
/*   Updated: 2025/10/19 20:15:23 by keitotak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	if (dest == NULL || src == NULL)
		return (NULL);
	i = 0;
	while (dest[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
