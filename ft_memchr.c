/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nboute <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 11:11:31 by nboute            #+#    #+#             */
/*   Updated: 2016/11/10 16:43:41 by nboute           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

const void	*ft_memchr(const void *ptr, int c, size_t n)
{
	unsigned char	*p;
	size_t			i;

	i = 0;
	p = (unsigned char*)ptr;
	while (i < n)
	{
		if (p[i] == (unsigned char)c)
			return ((const void*)(p + i));
		i++;
	}
	return (NULL);
}
