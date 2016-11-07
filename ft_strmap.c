/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nboute <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 14:55:03 by nboute            #+#    #+#             */
/*   Updated: 2016/11/07 18:13:09 by nboute           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strmap(char const *s, char (*f)(char))
{
	size_t	n;
	char	*str;

	if ((str = (char*)malloc(ft_strlen(s) + 1)) == NULL)
		return (NULL);
	n = 0;
	while (s[n])
	{
		str[n] = f(s[n]);
		n++;
	}
	str[n] = '\0';
	return (str);
}
