/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keitotak <keitotak@student.42tokyo.jp      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 19:31:00 by keitotak          #+#    #+#             */
/*   Updated: 2025/11/13 13:21:05 by keitotak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ptr;
<<<<<<< HEAD
	
	ptr= (unsigned char *)s;
=======

	ptr = (unsigned char *)s;
>>>>>>> 7350a44dbcb48261c40871dbc8f4931035f38024
	while (n--)
	{
		if (*ptr == (unsigned char)c)
			return (ptr);
		ptr++;
	}
	return (NULL);
}
