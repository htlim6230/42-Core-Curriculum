#include "libft.h"
#include <stdlib.h>

void ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list *current;
	t_list *nxt_node;

	if (lst == NULL || f == NULL)
	{
		return ;
	}
	current = lst;
	while (current != NULL)
	{	
		nxt_node = current->next;		
		f(current->content);		
		current = nxt_node;
	}
}

void f(void *current)
{
    printf("%s\n", (char *)content);
}