/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hui-tinl <hui-tinl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/04 13:10:54 by hui-tinl          #+#    #+#             */
/*   Updated: 2026/10/24 11:40:40 by hui-tinl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	unsigned char		check;
	const unsigned char	*ptr;

	i = 0;
	ptr = (const unsigned char *)s;
	check = (unsigned char)c;
	while (n > i)
	{
		if (ptr[i] == check)
		{
			return ((void *)(ptr + i));
		}
		i++;
	}
	return (NULL);
}
