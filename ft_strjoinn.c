/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoinn.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nboute <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/08 15:31:58 by nboute            #+#    #+#             */
/*   Updated: 2017/10/08 18:06:45 by nboute           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoinn(char const *str, char *str2, size_t n)
{
	size_t	i;
	char	*join;

	if (!str && !str2)
		return (NULL);
	if (!str2)
		return (ft_strdup(str));
	if (!str)
		return (ft_strndup(str2, n));
	i = 0;
	while (i < n && str2[i])
		i++;
	join = (char*)ft_memalloc(i + ft_strlen(str));
	*join = '\0';
	ft_strcat(join, str);
	ft_strncat(join, str2, i);
	return (join);
}
