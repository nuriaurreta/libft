/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nuria <nuria@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 08:53:30 by nuria             #+#    #+#             */
/*   Updated: 2024/02/10 11:30:49 by nuria            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	countwords(char const *s, char c)
{
	int	i;
	int	word;

	i = 0;
	word = 0;
	while (s && s[i])
	{
		if (s[i] != c)
		{
			word++;
			while (s[i] != c && s[i])
				i++;
		}
		else
			i++;
	}
	return (word);
}

static int	size_word(char const *s, char c, int i)
{
	int	size;

	size = 0;
	while (s[i] != c && s[i])
	{
		size++;
		i++;
	}
	return (size);
}

static void	ft_freemem(char **array, int j)
{
	while (j-- > 0)
		free(array[j]);
	free(array);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		word;
	char	**array;
	int		size;
	int		j;

	i = 0;
	j = -1;
	word = countwords(s, c);
	if (!s)
		return (NULL);
	array = (char **)malloc((word + 1) * sizeof(char *));
	if (array == 0)
		return (NULL);
	while (++j < word)
	{
		while (s[i] == c)
			i++;
		size = size_word(s, c, i);
		array[j] = ft_substr(s, i, size);
		if (!array[j])
			return (ft_freemem(array, j), (NULL));
		i += size;
	}
	return ((array[j] = 0), array);
}
