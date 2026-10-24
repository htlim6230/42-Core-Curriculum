/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hui-tinl <hui-tinl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 13:56:05 by hui-tinl          #+#    #+#             */
/*   Updated: 2026/10/20 13:56:05 by hui-tinl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*current;
	t_list	*nxt_node;

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
