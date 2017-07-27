/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nboute <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/15 16:59:24 by nboute            #+#    #+#             */
/*   Updated: 2017/07/27 16:33:08 by nboute           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				ft_swap(void *var1, void *var2, size_t len)
{
	unsigned char	*p1;
	unsigned char	*p2;
	unsigned char	tmp;
	size_t			i;

	i = 0;
	p1 = var1;
	p2 = var2;
	while (i < len)
	{
		tmp = p1[i];
		p1[i] = p2[i];
		p2[i] = tmp;
		i++;
	}
}
