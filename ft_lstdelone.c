/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hui-tinl <hui-tinl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 20:53:01 by hui-tinl          #+#    #+#             */
/*   Updated: 2026/10/16 14:49:24 by hui-tinl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstdelone(t_list *lst, void (*del)(void*))
{
	
	if (lst == NULL)
	{
		return ;
	}
	(lst -1)->next = (lst +1);
	*(lst + 1) = (lst -1);
	del(lst);
}

void *del(void* ptr)
{
	free(ptr);
}