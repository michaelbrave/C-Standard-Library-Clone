/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrave <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/25 21:38:34 by mbrave            #+#    #+#             */
/*   Updated: 2019/02/02 19:06:17 by mbrave           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** copy string until character found
** copies bytes from string src to string dst.  If
** the character c (as converted to an unsigned char) occurs in the string
** src, the copy stops and a pointer to the byte after the copy of c in the
** string dst is returned.  Otherwise, n bytes are copied, and a NULL
** pointer is returned.
** The source and destination strings should not overlap, as the behavior is
** undefined.
*/

#include "libft.h"

void		*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t				i;
	unsigned char		*s;
	unsigned char		*d;

	i = 0;
	s = (unsigned char *)src;
	d = (unsigned char *)dst;
	while (i < n)
	{
		d[i] = s[i];
		if (s[i] == (unsigned char)c)
		{
			dst = d;
			return (dst + i + 1);
		}
		++i;
	}
	return (NULL);
}
