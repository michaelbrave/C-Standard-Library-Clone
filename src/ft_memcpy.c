/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrave <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/05 01:04:23 by mbrave            #+#    #+#             */
/*   Updated: 2019/02/02 19:05:18 by mbrave           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Recreation of memcpy function from Standard C Library
** Function copies n bytes from memory area src to memory area dst. If dst
** and src overlap, behavior is undefined. Applications in which dst and src
** might overlap should use memmove instead.
*/

#include "libft.h"

void		*ft_memcpy(void *dst, const void *src, size_t n)
{
	char		*s;
	char		*d;
	size_t		i;

	s = (char *)src;
	d = (char *)dst;
	i = 0;
	while (i < n)
	{
		d[i] = s[i];
		++i;
	}
	return (d);
}
