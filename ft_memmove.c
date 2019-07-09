/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrave <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/05 01:04:44 by mbrave            #+#    #+#             */
/*   Updated: 2019/02/02 18:58:31 by mbrave           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Recreation of memmove function from Standard C Library
** Function copies len bytes from string src to string dst.
** The two strings may overlap; the copy is always done in a
** non-destructive manner.
** Function returns the original value of dst.
*/

#include "libft.h"

void		*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t		i;
	char		*d;
	const char	*s;

	d = (char *)dst;
	s = (const char *)src;
	if (s < d)
	{
		i = (int)len;
		while ((int)--i >= 0)
			d[i] = s[i];
	}
	else
	{
		i = 0;
		while (len--)
		{
			d[i] = s[i];
			i++;
		}
	}
	return (d);
}
