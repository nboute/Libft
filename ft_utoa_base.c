/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nboute <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/12 22:39:23 by nboute            #+#    #+#             */
/*   Updated: 2017/01/12 22:42:14 by nboute           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_utoa_base_p2(char *str, int *vals, unsigned value, short min)
{
	size_t	i;

	i = 0;
	while (vals[1] >= 0)
	{
		str[i] = value / ft_power(vals[0], vals[1]);
		str[i] = (str[i] < 10) ? str[i] + '0' : str[i] - 10 + 'A' + min * 32;
		i++;
		value = value % ft_power(vals[0], vals[1]--);
	}
	str[i] = '\0';
	return (str);
}

char		*ft_utoa_base(unsigned int value, int base, short min)
{
	int		vals[2];
	char	*str;

	vals[0] = base;
	vals[1] = 0;
	if (vals[0] < 2 || vals[0] > 35)
		return ((void*)0);
	while (value / ft_power(vals[0], vals[1]) >= vals[0])
		vals[1]++;
	str = (char*)malloc(vals[1] + 2);
	ft_utoa_base_p2(str, &vals[0], value, min);
	return (str);
}
