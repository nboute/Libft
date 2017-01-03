/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nboute <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/12 11:09:24 by nboute            #+#    #+#             */
/*   Updated: 2016/12/15 03:46:26 by nboute           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

float		ft_map(float val, float range, float min2, float max2)
{
	if (!range)
		return (0);
	return (min2 + ((max2 - min2) * (val / range)));
}

int		main(void)
{
	float	i;

	i = 0;
	while (i < 10)
	{
		printf("%i\n", (int)ft_map(i, 9, 0, 255));
		i++;
	}
}
