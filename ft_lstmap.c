#include "libft.h"
#include <stdlib.h>

t_list *ft_lstmap(t_list *lst, void *(*f)(void *),void (*del)(void *))
{
	t_list *new_list;
	t_list *new_node;
	void *content;
	new_list = NULL;
	if (lst == NULL || f == NULL || del == NULL)
	{
		return NULL;
	}
	while (lst != NULL)
	{
		content = f(lst->content);
		if (content == NULL)
		{
			del(content);
		}
		new_node = ft_lstnew(content);
		if (new_node == NULL)
		{
			ft_lstclear(new_node, del);
		}
		ft_lstadd_back(*new_list, new_node);
		new_node = lst->next;
	}
	return(new_list);
}

void f(void *current)
{
    printf("%s\n", (char *)content);
}

void del(void *current)
{
	free(current);
}