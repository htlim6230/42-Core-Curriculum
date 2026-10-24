/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hui-tinl <hui-tinl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/10 12:01:12 by hui-tinl          #+#    #+#             */
/*   Updated: 2026/10/20 17:00:00 by hui-tinl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_in_set(char c, const char *set)
{
	size_t	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;

	if (!s1 || !set)
	{
		return (NULL);
	}
	start = 0;
	while (s1[start] != '\0' && is_in_set(s1[start], set))
	{
		start++;
	}
	if (s1[start] == '\0')
	{
		return (ft_strdup(""));
	}
	end = ft_strlen(s1) - 1;
	while (end > start && is_in_set(s1[end], set))
	{
		end--;
	}
	return (ft_substr(s1, start, end - start + 1));
}
