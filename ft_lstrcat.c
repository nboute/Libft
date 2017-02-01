/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstrcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nboute <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/01 11:57:26 by nboute            #+#    #+#             */
/*   Updated: 2017/02/01 11:58:01 by nboute           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_lstrcat(char *dest, char *src, int dest_len, int src_len)
{
	long	*lptr_dest;
	long	*lptr_src;
	char	*cptr_dest;
	char	*cptr_src;

	lptr_dest = (long*)(dest + dest_len);
	lptr_src = (long*)src;
	while ((unsigned long)src_len >= sizeof(long))
	{
		*lptr_dest++ = *lptr_src++;
		src_len -= sizeof(long);
	}
	cptr_dest = (char*)lptr_dest;
	cptr_src = (char*)lptr_src;
	while (src_len > 0)
	{
		*cptr_dest++ = *cptr_src++;
		src_len--;
	}
	*cptr_dest = '\0';
	return (dest);
}
