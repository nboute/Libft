/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nboute <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 11:11:31 by nboute            #+#    #+#             */
/*   Updated: 2016/11/05 14:48:01 by nboute           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memchr(void *ptr, int c, size_t n)
{
	size_t		i;

	i = 0;
	while (i < n && *((unsigned char*)ptr + i) != (unsigned char)c)
		i++;
	if (*((unsigned char*)ptr + i) == (unsigned char)n)
		return ((unsigned char*)ptr + i);
	return (NULL);
}
