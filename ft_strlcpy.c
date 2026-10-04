/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hui-tinl <hui-tinl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/28 14:49:21 by hui-tinl          #+#    #+#             */
/*   Updated: 2026/10/02 14:41:13 by hui-tinl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
size_t	ft_strlcpy (char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	len;

	i = 0;
	len = 0;
	while (i < (size - 1) && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	if (i == size)
	{
		dest[i] = '\0';
	}
	while (src[len] != '\0')
	{
		len++;
	}
	return len;
}

int	main (void)
{
	char dest[20];
	char *src = "Trial test";
	printf("Copy results: %zu\n", ft_strlcpy(dest, src, 5));
}