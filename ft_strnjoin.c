/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnjoin.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nboute <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/08 15:15:56 by nboute            #+#    #+#             */
/*   Updated: 2017/10/08 15:23:05 by nboute           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnjoin(char *str, char *str2, size_t n)
{
	size_t	i;
	char	*join;

	if (!str && !str2)
		return (NULL);
	if (!str)
		return (ft_strdup(str2));
	if (!str2)
		return (ft_strndup(str, n));
	i = 0;
	while (i < n && str[i])
		i++;
	join = (char*)ft_memalloc(i + ft_strlen(str2));
	*join = '\0';
	ft_strncat(join, str, i);
	ft_strcat(join, str2);
	return (join);
}
