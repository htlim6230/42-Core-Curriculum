/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hui-tinl <hui-tinl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/26 18:21:23 by hui-tinl          #+#    #+#             */
/*   Updated: 2026/10/02 19:36:48 by hui-tinl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h> // Required for size_t
#include <stdio.h>

void	*ft_memset(void *s, int c, size_t len)
{
	size_t	i;
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	i = 0;
	while (i < len)
	{
		ptr[i] = (unsigned char)c;
		i++;
	}
	return (s);
}


int    main(void)
{
    char str[10] = "ABCDEFGHI";

    // Fill the first 4 bytes with '*'
    ft_memset(str, '*', 4);
    printf("%s\n", str); // Output: ****EFGHI

    // Zero out an integer array
    int numbers[3] = {42, 100, 200};
    ft_memset(numbers, 0, sizeof(numbers));
    printf("%d %d %d\n", numbers[0], numbers[1], numbers[2]); // Output: 0 0 0

    return (0);
}
