/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nboute <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 11:03:04 by nboute            #+#    #+#             */
/*   Updated: 2016/11/05 17:26:41 by nboute           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*ptrd;
	char	*ptrs;
	char	tmp;
	size_t	i;

	i = 0;
	ptrd = (char*)dest;
	ptrs = (char*)src;
	if (ptrd > ptrs)
	{
		while (n > 0)
		{
			*ptrd++ = *ptrs++;
			n--;
		}
	}
	while (i < n)
	{
		tmp = ptrs[i];
		ptrd[i++] = tmp;
	}
	return (dest);
}

#include <string.h>
#include <stdio.h>

int		main(void)
{
	char	dst1[0xF0];
	char	dst2[0xF0];
	char	*data = "penis\r\n";
	int		size = 0xF0 - 0xF;

	memset(dst1, 'A', sizeof(dst1));
	memset(dst2, 'A', sizeof(dst2));

	memcpy(dst1, data, strlen(data));
	memcpy(dst2, data, strlen(data));
	memmove(dst1 + 3, dst1, size);
	ft_memmove(dst2 + 3, dst2, size);
	printf("%s\n||\n%s\n", dst1, dst2);
	if (!memcmp(dst1, dst2, size))
		printf("yay\n");
	return (0);
}
