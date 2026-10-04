/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hui-tinl <hui-tinl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/02 16:04:47 by hui-tinl          #+#    #+#             */
/*   Updated: 2026/10/02 19:36:46 by hui-tinl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h> // Required for size_t
#include <stdio.h>

void	*ft_bzero(void *s, size_t len)
{
	size_t	i;
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	i = 0;
	while (i < len)
	{
		ptr[i] = '0';
		i++;
	}
	return (s);
}