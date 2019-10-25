/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrave <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/15 11:51:49 by mbrave            #+#    #+#             */
/*   Updated: 2019/02/04 18:23:58 by mbrave           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Allocates (with malloc(3)) and returns a “fresh” link.
** The variables content and content_size of the new link
** are initialized by copy of the parameters of the function.
** If the parameter content is nul, the variable content is initialized
** to NULL and the variable content_size is initialized to 0 even if the
** parameter content_size isn’t. The variable next is initialized to NULL.
** If the allocation fails, the function returns NULL.
*/

#include "libft.h"

t_list		*ft_lstnew(void const *content, size_t content_size)
{
	t_list *temp;

	temp = malloc(sizeof(t_list));
	if (temp == NULL)
		return (NULL);
	else if (content == NULL)
	{
		temp->content = NULL;
		temp->content_size = 0;
	}
	else
	{
		temp->content = malloc(sizeof(unsigned char) * content_size);
		if (temp->content == NULL)
			return (NULL);
		temp->content = ft_memcpy(temp->content, content, content_size);
		temp->content_size = content_size;
	}
	temp->next = NULL;
	return (temp);
}
