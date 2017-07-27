/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nboute <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/02 22:29:59 by nboute            #+#    #+#             */
/*   Updated: 2017/07/27 16:32:36 by nboute           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memset(void *ptr, int value, size_t num)
{
	long		*ptr2;
	char		*ptr3;
	long		val;
	size_t		i;

	value = (unsigned char)value;
	val = ((long)value << 56) + ((long)value << 48) + ((long)value << 40) +
	((long)value << 32) + (value << 24) + (value << 16) + (value << 8) + value;
	ptr2 = (long*)ptr;
	i = 0;
	while (num >= sizeof(long))
	{
		*ptr2++ = val;
		num -= sizeof(long);
	}
	ptr3 = (char*)ptr2;
	while (num)
	{
		*ptr3++ = value;
		num--;
	}
	return (ptr);
}
