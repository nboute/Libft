/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nboute <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/08 19:31:19 by nboute            #+#    #+#             */
/*   Updated: 2017/10/08 20:01:21 by nboute           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	check_base(char const *base)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (base[i])
	{
		j = i + 1;
		while (base[j])
			if (base[i] == base[j++])
				return (0);
		i++;
	}
	if (i < 2)
		return (0);
	return (i);
}

static size_t	check_str(char *str, char const *base)
{
	size_t	i;
	size_t	j;
	short	exists;

	i = 0;
	while (str[i])
	{
		j = 0;
		exists = 0;
		while (base[j])
		{
			if (base[j] == str[i])
				exists = 1;
			j++;
		}
		if (!exists)
			return (0);
		i++;
	}
	return (i);
}

int	ft_atoi_base(char *str, char const *base)
{
	size_t	n;
	size_t	s[2];
	size_t	j;
	int		i;

	n = 1;
	i = 0;
	if (!(s[0] = check_base(base)) || !(s[1] = check_str(str, base)))
		return (-1);
	while (n <= ft_strlen(str))
	{
		j = 0;
		while (base[j] != str[s[1] - n] && base[j])
			j++;
		i = i +  j * ft_power(s[0], n - 1);
		n++;
	}
	return (i);
}
