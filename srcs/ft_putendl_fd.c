/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nboute <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 12:55:50 by nboute            #+#    #+#             */
/*   Updated: 2016/11/04 12:56:34 by nboute           ###   ########.fr       */
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

static void		ft_putstr_fd(char const *s, int fd)
{
	write(fd, s, ft_strlen(s));
}

void			ft_putendl_fd(char const *s, int fd)
{
	ft_putstr_fd(s, fd);
	write(fd, "\n", 1);
}
