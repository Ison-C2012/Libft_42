/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keitotak <keitotak@student.42tokyo.jp      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 19:21:37 by keitotak          #+#    #+#             */
/*   Updated: 2025/10/17 22:28:45 by keitotak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	if (s == NULL)
		return (s);
	while (i < n)
		s[i++] = c;
	return (s);
}

/*if the size of s is overlap against n, it occurs segmentation fault.*/
