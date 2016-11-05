/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nboute <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 14:30:50 by nboute            #+#    #+#             */
/*   Updated: 2016/11/05 14:44:08 by nboute           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>

void	*ft_memalloc(size_t size)
{
	void *mem;
	char *ptr;

	if ((mem = malloc(size)) == NULL)
		return (0);
	ptr = (char*)mem;
	while (size > 0)
	{
		*ptr++ = 0;
		size--;
	}
	return (mem);
}
