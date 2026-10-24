/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hui-tinl <hui-tinl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/29 19:50:19 by hui-tinl          #+#    #+#             */
/*   Updated: 2026/10/24 14:58:03 by hui-tinl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	len;

	i = 0;
	len = ft_strlen(dest);
	if (size == 0)
		return (ft_strlen(src));
	if ((size - 1) > len && size > 0)
	{
		while ((size -1) > (len + i) && src[i] != '\0')
		{
			dest[len + i] = src[i];
			i ++;
		}
		dest[len + i] = '\0';
	}
	if (len >= size)
	{
		len = size;
	}
	return (len + ft_strlen(src));
}
