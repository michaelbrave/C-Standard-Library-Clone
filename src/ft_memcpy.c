/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrave <mbrave@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/05 01:04:23 by mbrave            #+#    #+#             */
/*   Updated: 2019/09/25 18:57:51 by mbrave           ###   ########.fr       */
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
	if (d == NULL || s == NULL)
		return (NULL);
	while (i < n)
	{
		d[i] = s[i];
		++i;
	}
	return (d);
}
