/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keitotak <keitotak@student.42tokyo.jp      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/26 17:16:58 by keitotak          #+#    #+#             */
/*   Updated: 2025/10/26 17:53:43 by keitotak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_lstsize(t_list *lst)
{
	int	size;

	size = 0;
	while (lst->next != NULL)
	{
		size++;
		lst = lst->next;
	}
	return (size);
}
