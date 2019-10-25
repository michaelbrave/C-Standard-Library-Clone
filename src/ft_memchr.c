/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrave <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/05 01:03:54 by mbrave            #+#    #+#             */
/*   Updated: 2019/01/26 14:34:14 by mbrave           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Recreation of function from Standard C Library
** Function locates the first occurrence of c (converted to an unsigned char)
** in string s.
*/

#include "libft.h"

void		*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*b;
	size_t			i;

	i = 0;
	b = (unsigned char *)s;
	while (i < n)
	{
		if (b[i] == (unsigned char)c)
		{
			return ((unsigned char *)s + i);
		}
		++i;
	}
	return (NULL);
}
