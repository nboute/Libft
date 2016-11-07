/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nboute <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/05 14:14:41 by nboute            #+#    #+#             */
/*   Updated: 2016/11/07 18:35:42 by nboute           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	wlen(char const *str, int i, char c)
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

static int	ft_nb_words(char const *str, char c)
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

char		**ft_strsplit(char const *str, char c)
{
	int		w;
	int		i;
	int		j;
	char	**tab;

	if ((tab = malloc(sizeof(char**) * (ft_nb_words(str, c) + 1))) == NULL)
		return (0);
	i = 0;
	w = 0;
	while (str[i])
	{
		while ((str[i] == c) && (str[i]))
			i++;
		if (str[i])
		{
			j = 0;
			if (((tab[w] = malloc(sizeof(char*) * (wlen(str, i, c) + 1))) == 0))
				return (0);
			while (str[i] != c && str[i])
				tab[w][j++] = str[i++];
			tab[w++][j] = '\0';
		}
	}
	tab[w] = 0;
	return (tab);
}
