/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nboute <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 12:47:10 by nboute            #+#    #+#             */
/*   Updated: 2016/11/07 18:03:37 by nboute           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

const char	*ft_strchr(const char *str, int c)
{
	unsigned int	i;

	i = 0;
	if (!c)
		return (str + ft_strlen(str));
	while (str[i])
	{
		if (str[i] == ((unsigned char)c))
			return (str + i);
		i++;
	}
	return (0);
}
