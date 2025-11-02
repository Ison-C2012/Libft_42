
#include "libft_bonus.h"
#include <stdio.h>

int	main(void)
{
	t_list	node1;
	t_list	node2;
	t_list	node3;
	t_list	*start;

	node1.content = "first";
	node1.next = &node2;
	node2.content = "second";
	node2.next = &node3;
	node3.content = "third";
	node3.next = &node1;

	start = &node1;
	printf("%s\n", (char *)start->content);

	ft_lstadd_front(&start, &node3);

	printf("%s\n", (char *)start->content);

	ft_lstadd_front(&start, &node2);

	printf("%s\n", (char *)start->next->next->next->content);

	return 0;
}
