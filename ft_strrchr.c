/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hui-tinl <hui-tinl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/04 12:11:14 by hui-tinl          #+#    #+#             */
/*   Updated: 2026/10/24 17:30:53 by hui-tinl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int		i;
	char	ch;

	ch = (char) c;
	if (str == NULL)
	{
		return (NULL);
	}
	i = ft_strlen(str);
	if (c == '\0')
	{
		return ((char *)&str[i]);
	}
	while (i >= 0)
	{
		if (str[i] == ch)
		{
			return ((char *)&str[i]);
		}
		i--;
	}
	return (NULL);
}
