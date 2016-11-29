/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_getnbnbr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nboute <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/29 17:44:28 by nboute            #+#    #+#             */
/*   Updated: 2016/11/29 17:51:05 by nboute           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_getnbnbr(char *str)
{
	size_t	n;
	int		i;

	 n = 0;
	 i = 0;
	 while (str[i])
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
	 return (n);
}
