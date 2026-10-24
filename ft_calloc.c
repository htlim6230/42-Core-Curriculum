/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hui-tinl <hui-tinl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/06 17:29:58 by hui-tinl          #+#    #+#             */
/*   Updated: 2026/10/21 20:29:26 by hui-tinl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;
	size_t	total_bytes;

	if (nmemb == 0 || size == 0)
	{
		return (malloc(0));
	}
	if (nmemb != 0 && (size > ((size_t) - 1) / nmemb))
	{
		return (NULL);
	}
	total_bytes = nmemb * size;
	ptr = malloc(total_bytes);
	if (ptr == NULL)
	{
		return (NULL);
	}
	ft_bzero(ptr, total_bytes);
	return (ptr);
}
