/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keitotak <keitotak@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 00:22:03 by keitotak          #+#    #+#             */
/*   Updated: 2025/10/18 00:41:43 by keitotak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if ((s1 == NULL) || (s2 == NULL))
		return (0);
	while (i < n && s1[i])
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (s1[i] - s2[i]);
}

/*
 i.		s1:NULL s2:string
 ii.	s1:string s2:NULL
 iii.	s1:NULL s2:NULL
 iv.	s1:string s2:string
*/
