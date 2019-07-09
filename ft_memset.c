/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrave <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/05 01:04:55 by mbrave            #+#    #+#             */
/*   Updated: 2019/02/02 19:24:05 by mbrave           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** fill a byte string with a byte value
** writes len bytes of value c (converted to an unsigned char) to the string b)
** returns the first argument (b)
*/

#include "libft.h"

void		*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*e;
	size_t			counter;

	e = (unsigned char *)b;
	counter = 0;
	while (len > 0)
	{
		e[counter] = (unsigned char)c;
		++counter;
		--len;
	}
	return (b);
}
