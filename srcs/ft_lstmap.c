/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nboute <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 13:39:01 by nboute            #+#    #+#             */
/*   Updated: 2016/11/04 20:02:27 by nboute           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include "../includes/libft.h"

static void		*ft_memalloc(size_t size)
{
	return ((void*)malloc(size));
}

static void		*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t		i;

	i = 0;
	while (i < n)
	{
		*((char*)dest + i) = *((char*)src + i);
		i++;
	}
	return (dest);
}

static t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*new;

	if ((new = (t_list*)malloc(sizeof(t_list))) == NULL)
		return (NULL);
	new->content = ft_memalloc(content_size);
	ft_memcpy(new->content, content, content_size);
	new->content_size = content_size;
	new->next = NULL;
	return (new);
}

t_list			*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*start;
	t_list	*lst_elem;
	t_list	*tmp;

	lst_elem = NULL;
	if (!lst)
		return (NULL);
	tmp = f(lst);
	if (tmp)
		lst_elem = ft_lstnew(tmp->content, tmp->content_size);
	start = lst_elem;
	lst = lst->next;
	while (lst)
	{
		tmp = f(lst);
		lst_elem->next = ft_lstnew(tmp->content, tmp->content_size);
		lst_elem = lst_elem->next;
		lst = lst->next;
	}
	return (start);
}
