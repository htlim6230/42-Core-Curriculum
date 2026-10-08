/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hui-tinl <hui-tinl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/08 11:39:09 by hui-tinl          #+#    #+#             */
/*   Updated: 2026/10/08 20:53:28 by hui-tinl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <stdlib.h>
#include <stdio.h>

static char *ft_strncpy(char *dest, const char *src, unsigned int n)
{
	int i;

	i = 0;
	while(i < (int)n && src[i] != '\0')
	{
		dest[i] = src [i];
		i++;
	}
	while (i < (int)n)
	{
		dest[i] = '\0';
		i++;
	}
	return dest;
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int sl;
	char *ptr;

	sl = ft_strlen(s);
	if (s == NULL)
	{
		return (NULL);
	}
	if(start >= sl)
	{
		return (ft_strdup(""));
	}
	if(len > (sl - start))
	{
		len = sl - start;
	}
	ptr = (char *)malloc(len + 1);
	if(ptr == NULL)
	{
		return (NULL); 
	}
	ft_strncpy(ptr, s + start, len);
	ptr[len] = '\0';
	return (ptr);
}

int    main(void)
{
    char const *src = "Check, Check";
    printf("%s\n",ft_substr(src, 3, 5));
    return (0);
}