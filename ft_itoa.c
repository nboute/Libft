/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nboute <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 09:51:15 by nboute            #+#    #+#             */
/*   Updated: 2017/01/12 23:45:46 by nboute           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_itoa(long n)
{
	char	*nb;
	short	exp;
	short	i;
	short	neg;

	neg = (n < 0) ? 1 : 0;
	n = (n < 0) ? -n : n;
	exp = 0;
	while ((n / ft_power(10, exp)) >= 10)
		exp++;
	if ((nb = (char*)malloc(exp + 2 + neg)) == NULL)
		return (NULL);
	if (neg)
		nb[0] = '-';
	i = 0;
	while (i <= exp)
	{
		nb[i + neg] = ((n / ft_power(10, exp - i)) % 10) + '0';
		i++;
	}
	nb[i + neg] = '\0';
	return (nb);
}
