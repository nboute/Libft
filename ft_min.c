/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_min.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nboute <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/17 11:37:42 by nboute            #+#    #+#             */
/*   Updated: 2017/10/17 11:40:13 by nboute           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

double	ft_dmin(double a, double b)
{
	return (a < b ? a : b);
}

int		ft_imin(int a, int b)
{
	return (a < b ? a : b);
}

char	ft_cmin(char a, char b)
{
	return (a < b ? a : b);
}

long	ft_lmin(long a, long b)
{
	return (a < b ? a : b);
}
