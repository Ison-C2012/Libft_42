/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keitotak <keitotak@student.42tokyo.jp      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 21:51:17 by keitotak          #+#    #+#             */
/*   Updated: 2025/10/21 21:31:01 by keitotak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*c;
	size_t	c_size;

	if (nmemb == 0 || size == 0)
		return (NULL);
	if (nmemb > ULONG_MAX / size)
		return (NULL);
	c_size = nmemb * size;
	c = malloc(c_size);
	if (c == NULL)
		return (NULL);
	ft_bzero(c, c_size);
	return (c);
}
