/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hui-tinl <hui-tinl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/04 12:11:14 by hui-tinl          #+#    #+#             */
/*   Updated: 2026/10/04 13:08:17 by hui-tinl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen (const char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
	if (str[i] == '\0')
	{
		return (0);
	}
}

char *ft_strrchr(const char *str, int c)
{
	int i;
	char ch = (char)c;
	
	i = ft_strlen(str);
	
	while (str[i] >= 0)
	{
		if(str[i] == ch)
		{
			return ((char *)&str[i]);
		}
		i--;
	}
	return (NULL);
}

