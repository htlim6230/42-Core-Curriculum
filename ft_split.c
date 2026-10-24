/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hui-tinl <hui-tinl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/10 18:37:35 by hui-tinl          #+#    #+#             */
/*   Updated: 2026/10/21 17:46:01 by hui-tinl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	word_len(char const *s, char c)
{
	int	i;

	i = 0;
	while (s[i] != '\0' && s[i] != c)
	{
		i++;
	}
	return (i);
}

static int	count_words(char const *s, char c)
{
	int	i;
	int	count;
	int	in_word;

	i = 0;
	count = 0;
	in_word = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c && in_word == 0)
		{
			in_word = 1;
			count++;
		}
		else if (s[i] == c)
		{
			in_word = 0;
		}
		i++;
	}
	return (count);
}

static void	*free_all(char **ptr, int j)
{
	while (j > 0)
	{
		j--;
		free(ptr[j]);
	}
	free(ptr);
	return (NULL);
}

static int	fill_words(char **ptr, char const *s, char c)
{
	int	i;
	int	j;
	int	len;

	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		while (s[i] != '\0' && s[i] == c)
			i++;
		if (s[i] != '\0')
		{
			len = word_len(&s[i], c);
			ptr[j] = ft_substr(s, i, len);
			if (ptr[j] == NULL)
				return (free_all(ptr, j), 0);
			i += len;
			j++;
		}
	}
	ptr[j] = NULL;
	return (1);
}

char	**ft_split(char const *s, char c)
{
	char	**ptr;
	int		n_words;

	if (s == NULL)
		return (NULL);
	n_words = count_words(s, c);
	ptr = malloc(sizeof(char *) * (n_words + 1));
	if (ptr == NULL)
		return (NULL);
	if (!fill_words(ptr, s, c))
		return (NULL);
	return (ptr);
}
