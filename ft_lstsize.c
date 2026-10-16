/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hui-tinl <hui-tinl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 17:43:55 by hui-tinl          #+#    #+#             */
/*   Updated: 2026/10/16 12:17:14 by hui-tinl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int ft_lstsize(t_list *lst)
{
	unsigned int i;

	i = 0;
	if (lst == NULL)
	{
		return (NULL);
	}
	while (lst !=NULL)
	{
		i++;
		lst = lst -> next;
	}
	return i;
}