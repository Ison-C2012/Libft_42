/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keitotak <keitotak@student.42tokyo.jp      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/26 19:22:17 by keitotak          #+#    #+#             */
/*   Updated: 2025/10/26 19:57:54 by keitotak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	size_t	size;

	size = ft_lstsize(lst);
	while (lst->next != NULL)
	{
		f(lst);
	}
}
