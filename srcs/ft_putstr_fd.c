/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nboute <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 12:53:59 by nboute            #+#    #+#             */
/*   Updated: 2016/11/04 16:14:51 by nboute           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <unistd.h>

static size_t	ft_strlen(char const *str)
{
	size_t	n;

	n = 0;
	while (str[n])
		n++;
	return (n);
}

void			ft_putstr_fd(char const *s, int fd)
{
	write(fd, s, ft_strlen(s));
}
