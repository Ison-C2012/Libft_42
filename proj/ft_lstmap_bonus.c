/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keitotak <keitotak@student.42tokyo.jp      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/26 19:22:17 by keitotak          #+#    #+#             */
/*   Updated: 2026/01/03 18:40:08 by keitotak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*free_lst(t_list *lst, void (*del)(void*))
{
	ft_lstclear(&lst, del);
	return (NULL);
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*map;
	t_list	*new;

	map = NULL;
	while (lst != NULL)
	{
		new = ft_lstnew(f(lst->content));
		if (new == NULL)
			return (free_lst(map, del));
		ft_lstadd_back(&map, new);
		lst = lst->next;
	}
	return (map);
}

/*
#include <stdio.h>

int	ft_islower(char c)
{
	return (c >= 'a' && c <= 'z');
}

char	*capital(char *str)
{
	char	*cap;
	size_t	i;

	cap = (char *)malloc(ft_strlen(str));
	if (cap == NULL)
		return (NULL);
	i = 0;
	while (str[i])
	{
		if (ft_islower(str[i]))
			cap[i] = str[i] + 'A' - 'a';
		else
			cap[i] = str[i];
		i++;
	}
	return (cap);
}

void	putlst(t_list *lst)
{
	while (lst != NULL)
	{
		printf("%s", (char *)lst->content);
		printf(" ");
		lst = lst->next;
	}
	printf("\n");
}

int	main(int argc, char **argv)
{
	t_list	*lst;
	t_list	*new;
	t_list	*map;
	int		i;

	lst = ft_lstnew(ft_strdup(""));
	i = 0;
	while (i + 1 < argc)
	{
		new = ft_lstnew(ft_strdup(argv[i + 1]));
		ft_lstadd_back(&lst, new);
		i++;
	}
	putlst(lst);
	map = ft_lstmap(lst, capital, free);
	putlst(map);
	ft_lstclear(&lst, free);
	ft_lstclear(&map, free);
	return 0;
}
*/
