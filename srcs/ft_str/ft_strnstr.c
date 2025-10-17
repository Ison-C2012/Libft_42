/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keitotak <keitotak@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 23:05:24 by keitotak          #+#    #+#             */
/*   Updated: 2025/10/18 00:49:00 by keitotak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	little_len;

	i = 0;
	if (big == NULL || little == NULL)
		return (NULL);
	little_len = ft_strlen(little);
	while (i < len)
	{
		if (big[i] == *little)
		{
		}
		i++;
	}
	return (NULL);
}
