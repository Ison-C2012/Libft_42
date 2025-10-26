/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keitotak <keitotak@student.42tokyo.jp      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 21:51:17 by keitotak          #+#    #+#             */
/*   Updated: 2025/10/24 01:17:42 by keitotak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*mem;
	size_t	m_size;

	if (nmemb == 0 || size == 0)
		return (NULL);
	if (nmemb > ULONG_MAX / size)
		return (NULL);
	m_size = nmemb * size;
	mem = malloc(m_size);
	if (mem == NULL)
		return (NULL);
	ft_bzero(mem, m_size);
	return (mem);
}
