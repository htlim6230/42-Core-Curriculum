/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hui-tinl <hui-tinl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/29 19:50:19 by hui-tinl          #+#    #+#             */
/*   Updated: 2026/10/02 14:41:35 by hui-tinl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
size_t	ft_strlcat (char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	len;

	i = 0;
	len = 0;
	while (dest[len] != '\0')
	{
		len++;
	}
	while (i < size && src[i] != '\0')
	{
		dest[len + i] = src[i];
		i ++;
	}
	if (i == size)
	{
		dest[len + i] = '\0';
	}
	return (len + i);
}

int main (void)
{
	char dest[20] = "test";
	char *src = "Trial test";
	printf("Copy results: %zu\n", ft_strlcat(dest, src, 5));
}