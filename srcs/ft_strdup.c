/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nboute <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 11:22:25 by nboute            #+#    #+#             */
/*   Updated: 2016/11/05 14:47:25 by nboute           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>

static size_t		ft_strlen(char const *str)
{
	size_t i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char				*ft_strdup(const char *str)
{
	char	*dup;
	int		n;

	if ((dup = (char*)malloc(sizeof(char) * (ft_strlen(str) + 1))) == NULL)
		return (NULL);
	n = 0;
	while (str[n])
	{
		dup[n] = str[n];
		n++;
	}
	dup[n] = '\0';
	return (dup);
}
