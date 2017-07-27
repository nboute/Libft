/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nboute <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 10:51:18 by nboute            #+#    #+#             */
/*   Updated: 2017/07/27 16:12:41 by nboute           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_fast_memcpy(void *dest, void *src, size_t n)
{
	size_t	i;
	long	*ptrd;
	long	*ptrs;

	i = 0;
	ptrd = (long*)dest;
	ptrs = (long*)src;
	while (n - i >= sizeof(long))
	{
		*ptrd++ = *ptrs++;
		i += sizeof(long);;
	}
	while (i < n)
	{
		*((char*)dest + i) = *((char*)src + i);
		i++;
	}
	return (dest);
}
