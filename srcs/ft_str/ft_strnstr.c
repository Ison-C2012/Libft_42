/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keitotak <keitotak@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 23:05:24 by keitotak          #+#    #+#             */
/*   Updated: 2025/10/18 11:50:34 by keitotak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	little_len;

	i = 0;
	j = 0;
	if (big == NULL || little == NULL)
		return (NULL);
	little_len = ft_strlen(little);
	while (i < len)
	{
		while (big[i + j] && big[i + j] == little[j])
			j++;
		if (j == little_len)
			return (&big[i]);
		j = 0;
		i++;
	}
	return (NULL);
}
