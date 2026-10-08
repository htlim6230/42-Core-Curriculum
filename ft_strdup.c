/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hui-tinl <hui-tinl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/07 19:12:51 by hui-tinl          #+#    #+#             */
/*   Updated: 2026/10/08 20:53:40 by hui-tinl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <stdlib.h>

static char *ft_strcpy(char *dest, const char *src)
{
	int i;

	i = 0;
	while(src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while(src[i] == '\0')
	{
		dest[i] = '\0';
		i++;
	}
	return dest;
}

char	*ft_strdup(const char *s)
{
	char *ptr;
	size_t n;

	n = ft_strlen(s);
		
	ptr = (char *)malloc((n+1)*sizeof(s));
	if (ptr == 'NULL')
	{
		return (NULL);
	}
	ft_strcpy(ptr, s);
	return (ptr);
}