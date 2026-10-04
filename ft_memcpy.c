/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hui-tinl <hui-tinl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/02 16:52:16 by hui-tinl          #+#    #+#             */
/*   Updated: 2026/10/02 19:36:44 by hui-tinl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h> // Required for size_t
#include <stdio.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t i;
	unsigned char	*ptr1;
	unsigned char	*ptr2;

	i = 0;
	ptr1 = (unsigned char *)dest;
	ptr2 = (unsigned char *)src;

	if (ptr1[i] == '\0' && ptr2[i] == '\0')
	{
		return NULL;
	}

	while (i < n)
	{
		ptr1[i] = ptr2[i];
		i++;
	}
	return (dest);
}

int    main(void)
{
    char str[10] = "";
    char src[10] = "";

    // Fill the first 4 bytes in str with 'qwer' from src
    ft_memcpy(str, src, 4);
    printf("%s\n", str);
    
    return (0);
}