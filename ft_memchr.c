/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hui-tinl <hui-tinl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/04 13:10:54 by hui-tinl          #+#    #+#             */
/*   Updated: 2026/10/04 14:53:31 by hui-tinl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h> // Required for size_t
#include <stdio.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	const unsigned char	*ptr;
	unsigned char	check;
	
	i = 0;
	ptr = (const unsigned char *)s;
	check = (unsigned char)c;
	while (i < n)
	{
		if(ptr[i] == check)
		{
			return ((void *)(ptr+i));
		}
		i++;
	}
	return (NULL);
}

int main (void)
{
	char *str = "aythf***";
	printf("%p\n",ft_memchr(str, '*', 5));
}

//• return ((void *)(ptr + i));
//This is the key line.
	• ptr + i uses pointer arithmetic to calculate the exact address of the matching byte. Because ptr is a const pointer, ptr + i is also treated as const.
	• (void *) forces the compiler to drop the const restriction. This satisfies the function's return type contract (void *). This is legal because casting doesn't execute a write operation; it only alters the pointer's type declaration.
