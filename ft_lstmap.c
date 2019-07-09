/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrave <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/15 11:51:37 by mbrave            #+#    #+#             */
/*   Updated: 2019/02/04 18:24:38 by mbrave           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Iterates a list lst and
** applies the function f to each link to create a “fresh” list
** (using malloc(3)) resulting from the suc-cessive applications of f.
** If the allocation fails, the function returns NULL
** return the new list
*/

#include "libft.h"

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*list;
	t_list	*start;

	list = f(lst);
	start = list;
	if (lst && f)
	{
		while (list && lst->next)
		{
			lst = lst->next;
			if (!(list->next = f(lst)))
			{
				free(list->next);
				return (NULL);
			}
			list = list->next;
		}
	}
	return (start);
}
