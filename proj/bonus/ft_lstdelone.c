/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keitotak <keitotak@student.42tokyo.jp      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/26 17:59:51 by keitotak          #+#    #+#             */
/*   Updated: 2025/10/26 19:11:50 by keitotak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (lst == NULL)
		return ;
	if (del)
		del(lst->content);
	free(lst);
}

/*
#include <stdio.h>
#include <string.h>

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (lst == NULL)
		return ;
	if (del)
		del(lst->content);
	free(lst);
}

int	main(void)
{
	t_list	node1;
	t_list	node2;
	t_list	node3;
	t_list	*start;

	node1.content = strdup("first");
	node1.next = &node2;
	node2.content = strdup("second");
	node2.next = &node3;
	node3.content = strdup("third");
	node3.next = &node1;

	start = &node1;
	printf("%s\n", (char *)start->content);

	ft_lstadd_front(&start, &node3);

	printf("%s\n", (char *)start->content);

	ft_lstadd_front(&start, &node2);

	printf("%s\n", (char *)start->next->next->next->content);

	ft_lstdelone(start, ft_free);

	return 0;
}
*/
