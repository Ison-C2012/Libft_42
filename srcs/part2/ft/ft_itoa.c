/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keitotak <keitotak@student.42tokyo.jp      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 19:46:52 by keitotak          #+#    #+#             */
/*   Updated: 2025/10/20 01:31:08 by keitotak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


static size_t	get_size(int n)
{
	size_t	s;

	if (n == INT_MIN)
		return (11);
	s = 0;
	if (n < 0)
	{
		s++;
		n *= -1;
	}
	while (n)
	{
		s++;
		n /= 10;
	}
	return (s);
}

char	*ft_itoa(int n)
{
	char	*nb;
	size_t	size;

	size = get_size(n);
	nb = (char *)malloc(sizeof(char) * (size + 1));

}
