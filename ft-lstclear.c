#include "libft.h"
#include <stdlib.h>

void ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list *current;
	t_list *nxt_node;

	if (lst == NULL || del == NULL)
	{
		return ;
	}
	current = *lst;
	while (current != NULL)
	{	
		nxt_node = current->next;		
		del(current->content);		
		free(current);
		current = nxt_node;
	}
	*lst = NULL;
}

void del(void *current)
{
    free(current);
}