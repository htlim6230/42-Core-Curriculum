/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hui-tinl <hui-tinl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/03 18:11:20 by hui-tinl          #+#    #+#             */
/*   Updated: 2026/10/04 12:42:53 by hui-tinl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strchr(const char *str, int c)
{
	int i;
	char ch = (char)c;
	
	i = 0;
	
	while (str[i] != '\0')
	{
		if(str[i] == ch)
		{
			return ((char *)&str[i]);
		}
		i++;
	}
	return (NULL);
}

int main(void)
{
	char str[10] = "QEYUR";
	int c = 'Y';
	printf("Results: %s\n", ft_strchr(str, c));
	return (0);

}
