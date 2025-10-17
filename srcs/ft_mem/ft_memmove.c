/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keitotak <keitotak@student.42tokyo.jp      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 19:52:00 by keitotak          #+#    #+#             */
/*   Updated: 2025/10/17 20:26:48 by keitotak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (dest == NULL || src == NULL)
		return (NULL);
	while (i < n)
	{
		if (dest - src < 0)
			dest[i] = src[i];
		else
			dest[n - 1 - i] = src[n - 1 - i];
		i++;
	}
	return (dest);
}
