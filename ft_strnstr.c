/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hui-tinl <hui-tinl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/06 12:26:21 by hui-tinl          #+#    #+#             */
/*   Updated: 2026/10/24 17:38:27 by hui-tinl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	n;

	i = 0;
	if (needle == NULL || needle[0] == '\0')
	{
		return ((char *)haystack);
	}
	while (len > i && haystack[i] != '\0')
	{
		n = 0;
		while (needle[n] != '\0' && needle[n] == haystack[i + n]
			&& len > (i + n))
		{
			n++;
		}
		if (needle[n] == '\0')
		{
			return (((char *)&haystack[i]));
		}
		i++;
	}
	return (NULL);
}
