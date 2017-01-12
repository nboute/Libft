/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nboute <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/12 22:24:29 by nboute            #+#    #+#             */
/*   Updated: 2017/01/12 22:26:48 by nboute           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_itoa_base_p2(char *str, int *vals, long nb, short min)
{
	size_t	i;

	i = 0;
	while (vals[1] >= 0)
	{
		str[i] = nb / ft_power(vals[0], vals[1]);
		str[i] = (str[i] < 10) ? str[i] + '0' : str[i] - 10 + 'A' + min * 32;
		i++;
		nb = nb % ft_power(vals[0], vals[1]--);
	}
	str[i] = '\0';
	return (str);
}

char		*ft_itoa_base(int value, int base, short min)
{
	long	nb;
	int		vals[2];
	char	*str;
	short	neg;

	neg = 0;
	vals[0] = base;
	vals[1] = 0;
	nb = (long)value;
	if (vals[0] < 2 || vals[0] > 35)
		return ((void*)0);
	if (nb < 0)
	{
		nb = -nb;
		if (vals[0] == 10)
			neg = 1;
	}
	while (nb / ft_power(vals[0], vals[1]) >= vals[0])
		vals[1]++;
	str = (char*)malloc(vals[1] + 2);
	str[0] = (neg == 1) ? '-' : 0;
	ft_itoa_base_p2(str, &vals[0], nb, min);
	return (str);
}
