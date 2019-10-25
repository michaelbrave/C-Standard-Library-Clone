/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrave <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/15 11:51:19 by mbrave            #+#    #+#             */
/*   Updated: 2019/02/02 19:08:46 by mbrave           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Iterates the list 1st and applies the function f to each link
*/

#include "libft.h"

void		ft_lstiter(t_list *lst, void (*f)(t_list *elem))
{
	if (f)
	{
		while (lst)
		{
			f(lst);
			lst = lst->next;
		}
	}
}
