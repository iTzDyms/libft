/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cheron <cheron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/28 14:32:56 by cheron            #+#    #+#             */
/*   Updated: 2015/01/18 14:47:36 by cheron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static void	ft_elemdel(void *content, size_t size)
{
	(void)size;
	free(content);
}

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*new;
	t_list	*mod;

	new = NULL;
	if (lst)
	{
		mod = f(lst);
		if (mod)
		{
			new = ft_lstnew(mod->content, mod->content_size);
			if (!new)
				return (NULL);
			if (lst->next)
			{
				new->next = ft_lstmap(lst->next, f);
				if (new->next == NULL)
					ft_lstdel(&new, &ft_elemdel);
			}
		}
	}
	return (new);
}
