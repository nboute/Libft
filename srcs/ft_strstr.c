/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nboute <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 13:17:17 by nboute            #+#    #+#             */
/*   Updated: 2016/11/03 13:37:28 by nboute           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

const char	*ft_strstr(const char *s1, const char *s2)
{
	int	i;
	int	j;

	i = 0;
	if (!*s2)
		return (s1);
	while (s1[i])
	{
		j = 0;
		while (s2[j] == s1[i + j] && s1[i + j])
		{
			if (!s2[j + 1])
				return (s1 + i);
			j++;
		}
		i++;
	}
	return (NULL);
}
