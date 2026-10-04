/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hui-tinl <hui-tinl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/28 12:51:07 by hui-tinl          #+#    #+#             */
/*   Updated: 2026/10/01 13:25:39 by hui-tinl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		if (s1[i] != s2[i])
		{
			if (s1[i] > s2[i])
			{
				return (1);
			}
			return (-1);
		}
		else if (s1[i] == '\0' && s2[i] == '\0')
		{
			return (0);
		}
		i ++;
	}
	return (0);
}

//int main (void)
//{
	//char s1[] = "G";
	//char s2[] = "Gzzks2";
	//printf("Results: %d\n", ft_strncmp(s1, s2, 3));
//}
