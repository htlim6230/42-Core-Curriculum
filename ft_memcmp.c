/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hui-tinl <hui-tinl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/04 18:21:36 by hui-tinl          #+#    #+#             */
/*   Updated: 2026/10/04 19:33:54 by hui-tinl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t i;
	const unsigned char *str1;
	const unsigned char *str2;
	
	i = 0;
	str1 = (const unsigned char*)s1;
	str2 = (const unsigned char*)s2;

	while(i < n)
	{
		if (str1[i] != str2[i])
		{
			if (str1[i] > str2[i])
			{
				return (1);
			}
			return (-1);
		}
		else if (str1[i] == '\0' && str2[i] == '\0')
		{
			return (0);
		}
		i ++;
	}
	return (0);
}
