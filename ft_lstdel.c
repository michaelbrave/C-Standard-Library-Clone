/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrave <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/15 11:49:46 by mbrave            #+#    #+#             */
/*   Updated: 2019/02/02 19:29:31 by mbrave           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Takes as a parameter the adress of a pointer to a link and frees
** the memory of this link and every successors of that link using the
** functions del and free(3). Finally the pointer to the link that was
** just freed must be set to NULL (quite similar to the function ft_memdel
** from the mandatory part).
*/

#include "libft.h"

void		ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*holder;
	t_list	*next;

	holder = *alst;
	if (del)
	{
		while (holder)
		{
			next = holder->next;
			del(holder->content, holder->content_size);
			free(holder);
			holder = next;
		}
		*alst = NULL;
	}
}
