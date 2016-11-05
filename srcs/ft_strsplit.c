/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nboute <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/05 14:14:41 by nboute            #+#    #+#             */
/*   Updated: 2016/11/05 14:16:19 by nboute           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		wlen(char const *str, int i, char c)
{
	int n;

	n = 0;
	while (str[i] != c && str[i])
	{
		i++;
		n++;
	}
	return (n);
}

int		ft_nb_words(char const *str, char c)
{
	int i;
	int words;
	int isword;

	i = 0;
	words = 0;
	isword = 0;
	while (str[i])
	{
		while (str[i] != c && str[i])
		{
			isword = 1;
			i++;
		}
		if (str[i] == c || str[i] == '\0')
		{
			words += (isword == 1) ? 1 : 0;
			isword = 0;
			i += (str[i] == '\0') ? 0 : 1;
		}
	}
	return (words);
}

char	**ft_strsplit(char const *str, char c)
{
	int		word;
	int		i;
	int		j;
	char	**tab;

	if ((tab = malloc(sizeof(char**) * (ft_nb_words(str, c) + 1))) == NULL)
		return (0);
	i = 0;
	word = 0;
	while (str[i])
	{
		while ((str[i] == c) && (str[i]))
			i++;
		if (str[i])
		{
			j = 0;
			if (((tab[word] = malloc(sizeof(char*)
								* (wlen(str, i, c) + 1))) == 0))
				return (0);
			while (str[i] != c && str[i])
				tab[word][j++] = str[i++];
			tab[word++][j] = '\0';
		}
	}
	tab[word] = 0;
	return (tab);
}
