/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hui-tinl <hui-tinl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/06 17:29:58 by hui-tinl          #+#    #+#             */
/*   Updated: 2026/10/06 20:21:35 by hui-tinl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include libft.h
#include <stdio.h>
#inlude <stdlib.h>

void    *ft_calloc(size_t nmemb, size_t size)
{
    //our aim is to return a void * so the int * ptr here is???
    //keep to size_t for our 2 arguments to prevent overflow risk
    void *ptr = ft_bzero(ptr);
    //(nmemb * size) / nmemb != size doesn't make sense tho
    if(nmemb != 0 && (nmemb * size)
    *ptr = (void *)malloc(nmemb*size);
    
    if (nmemb == 0 || size == 0)
    {
      return (malloc(0));
    }
    
    if (ptr > SIZE_MAX / size)
    {
        return (NULL);
    }
    ptr == malloc(nmemb * size)
    if (!ptr)
    {
      return (ptr);
    }
}