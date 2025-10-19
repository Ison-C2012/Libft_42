/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keitotak <keitotak@student.42tokyo.jp      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 19:43:03 by keitotak          #+#    #+#             */
/*   Updated: 2025/10/19 19:46:28 by keitotak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putnbr_fd(int n, int fd)
{
	if (n == INT_MIN)
		ft_itoa(INT_MIN);
	if (n < 0)
		n *= -1;
	if (n < 10)
		ft_putchar_fd(n - '0', fd);
	ft_putnbr_nd(n / 10);
	ft_putnbr_nd(n % 10);
}
