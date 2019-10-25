/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrave <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/10 16:06:54 by mbrave            #+#    #+#             */
/*   Updated: 2019/01/28 15:20:27 by mbrave           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Allocates (with malloc(3)) and returns a “fresh” memory area. The memory
** allocated is initialized to 0. If the alloca- tion fails, the function
** returns NULL.
*/

#include "libft.h"

void		*ft_memalloc(size_t size)
{
	char *res;

	res = (void *)malloc(size);
	if (res != NULL)
	{
		ft_bzero(res, size);
		return (res);
	}
	return (NULL);
}
