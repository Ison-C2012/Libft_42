/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keitotak <keitotak@student.42tokyo.jp      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/26 19:22:17 by keitotak          #+#    #+#             */
/*   Updated: 2025/10/28 22:01:27 by keitotak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_bonus.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*tmp;

	tmp = lst;
	while (lst != NULL)
	{
		tmp = lst;
		lst->content = f(lst->content);
		if (lst->content == NULL)
			del(lst);
		lst = tmp->next;
	}
	return (lst);
}
