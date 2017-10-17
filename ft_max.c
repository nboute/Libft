/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_max.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nboute <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/17 11:42:19 by nboute            #+#    #+#             */
/*   Updated: 2017/10/17 11:42:42 by nboute           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

double	ft_dmax(double a, double b)
{
	return (a > b ? a : b);
}

int		ft_imax(int a, int b)
{
	return (a > b ? a : b);
}

char	ft_cmax(char a, char b)
{
	return (a > b ? a : b);
}

long	ft_lmax(long a, long b)
{
	return (a > b ? a : b);
}
