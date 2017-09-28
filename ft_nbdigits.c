/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nbdigits.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nboute <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/10 16:04:38 by nboute            #+#    #+#             */
/*   Updated: 2017/05/10 16:05:59 by nboute           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_nbdigits(long val)
{
	size_t	nb;

	nb = 0;
	while (val % 10 || val / 10)
	{
		nb++;
		val /= 10;
	}
	return (nb);
}