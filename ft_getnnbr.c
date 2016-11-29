/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_getnnbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nboute <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/29 18:00:54 by nboute            #+#    #+#             */
/*   Updated: 2016/11/29 19:29:29 by nboute           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_getnnbr(const char *str, size_t m)
{
	size_t	n;
	int		i;

	 n = 0;
	 i = 0;
	 while (str[i] && (n < m))
	 {
		 if ((str[i] == '-' || str[i] == '+')
				 && (str[i + 1] < '0' || str[i + 1] > '9') )
			 return (n);
		 else if (str[i] == '-' || str[i] == '+')
			 i++;
		 else if (str[i] != ' ' && (str[i] < '0' || str[i] > '9'))
			 return (n);
		 else if (str[i] >= '0' && str[i] <= '9')
			 n++;
		 while (str[i] >= '0' && str[i] <= '9')
			 i++;
	 }
	 return (ft_getnbr(str + i));
}
