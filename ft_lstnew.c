/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hui-tinl <hui-tinl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 13:14:43 by hui-tinl          #+#    #+#             */
/*   Updated: 2026/10/15 16:43:10 by hui-tinl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
t_list	*ft_lstnew(void *content)
{
	t_list *node;
	node = malloc(sizeof(t_list));
	if (node == NULL)
	{
		return (NULL);
	}
	node->content = content; //can just put content? not address of content?
	node->next = NULL;
	return (node);
}

void *content
{
	malloc(sizeof(node));
}

typedef struct s_list
{
void *content; //POINTER TO DATA STORED IN NODE
struct s_list *next; //POINTER TO NEXT NODE IN LIST
} t_list;