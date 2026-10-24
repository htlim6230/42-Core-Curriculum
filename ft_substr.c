/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hui-tinl <hui-tinl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/08 11:39:09 by hui-tinl          #+#    #+#             */
/*   Updated: 2026/10/24 12:29:35 by hui-tinl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_str_cpy(char *dest, const char *src, unsigned int n)
{
	int	i;

	i = 0;
	while ((int)n > i && src[i] != '\0')
	{
		dest[i] = src [i];
		i++;
	}
	while ((int)n > i)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	sl;
	char			*ptr;

	if (s == NULL)
		return (NULL);
	sl = ft_strlen(s);
	if (start >= sl)
	{
		return (ft_strdup(""));
	}
	if (len > (sl - start))
	{
		len = sl - start;
	}
	ptr = (char *)malloc(len + 1);
	if (ptr == NULL)
	{
		return (NULL);
	}
	ft_str_cpy(ptr, s + start, len);
	ptr[len] = '\0';
	return (ptr);
}
