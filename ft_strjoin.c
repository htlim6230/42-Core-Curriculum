/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hui-tinl <hui-tinl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/08 19:22:05 by hui-tinl          #+#    #+#             */
/*   Updated: 2026/10/08 20:52:47 by hui-tinl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <stdlib.h>
#include <stdio.h>

static char	*ft_strcat(char const *dest, char const *src)
{
	int	i;
	int	n;

	i = 0;
	n = 0;
	while (dest[n] != '\0')
	{
		n++;
	}
	while (src[i] != '\0')
	{
		dest[n + i] = src[i];
		i++;
	}
	if (src[i] == '\0')
	{
		dest[n + i] = '\0';
	}
	return (dest);
}

char *ft_strjoin(char const *s1, char const *s2)
{
	char *new_str;
	size_t s1_len;
	size_t s2_len;

	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	if (s1 == NULL && s2 == NULL)
	{
		return (NULL);
	}
	new_str = (char*)malloc(sizeof(char) * (s1_len + s2_len + 1));
	if(new_str == NULL)
	{
		return (NULL);
	}
	ft_strcpy(new_str, s1)
	ft_strcat(new_str, s2);
	ptr[total_len] = '\0';
	return (ptr);
}
