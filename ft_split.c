/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hui-tinl <hui-tinl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/10 18:37:35 by hui-tinl          #+#    #+#             */
/*   Updated: 2026/10/18 20:46:46 by hui-tinl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

static int	word_len (char const *s, char c)
{
	int i;

	i = 0;
	while (s[i] != '\0' && s[i] != c)
	{
		i++;
	}
	return (i);
}

static int count_words (char const *s, char c)
{
	int n;
	int len;

	n = 0;
	len = 0;
	while (s[n] != '\0')
	{
		while (s[n] == c)
		{
			n++;
		}
		if (s[n] != '\0' && s[n] != c)
		{
			len++;
		}
		n = n + word_len(&s[n], c);
		if (s[n] == '\0')
		{
			break;
		}
	}
	return (len);
}

char	**ft_split(char const *s, char c) //char** to return collection of strings
{
	int i;
	int n_words;
	int n_str;
	char *ptr
	
	i = 0;
	if (s == NULL)
		return NULL;
	n_words = count_words(s, c);
	ptr = (char *)malloc((n_words+1) * sizeof(char));
	if (ptr == NULL)
	{
		return NULL;
	}
	while(s[i] != '\0')
	{
		while (s[i] == c)
		{
			i++;
			if (s[i] != '\0' && s[i] != c)
			{
				n_str = word_len(s, c);
				ptr = ft_substr(&s[n], c, n_str);
				if (ptr == NULL)
				{
					return NULL;
				}
			}
		if (s[i] == '\0')
		{
			return NULL;
		}		
	}
	ptr[n_str + 1] = '\0';
	return (*ptr);
}





char *result()

int main(void)
{
  char *s = "   hello world   42";
  char c = ' ';
  printf("Check: %s\n", ft_split(s, c));
  return(0);
}
