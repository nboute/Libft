/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nboute <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 10:38:49 by nboute            #+#    #+#             */
/*   Updated: 2016/11/04 12:55:44 by nboute           ###   ########.fr       */
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

static void		ft_putstr(char const *s)
{
	write(1, s, ft_strlen(s));
}

void			ft_putendl(char const *s)
{
	ft_putstr(s);
	write(1, "\n", 1);
}
