/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nboute <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 10:22:59 by nboute            #+#    #+#             */
/*   Updated: 2016/11/04 16:14:40 by nboute           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>

static size_t	ft_strlen(char const *str)
{
	size_t	n;

	n = 0;
	while (str[n])
		n++;
	return (n);
}

void			ft_putstr(char const *s)
{
	write(1, s, ft_strlen(s));
}
