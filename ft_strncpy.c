/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrave <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/19 13:41:51 by mbrave            #+#    #+#             */
/*   Updated: 2019/01/26 22:36:41 by mbrave           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** copy at most len characters from
** src into dst.  If src is less than len characters long, the remainder of
** dst is filled with `\0' characters.  Otherwise, dst is not terminated.
**
** The source and destination strings should not overlap, as the behavior is
** undefined.
**
** return dst
*/

#include "libft.h"

char		*ft_strncpy(char *dst, const char *src, size_t len)
{
	size_t	i;

	i = 0;
	while (src[i] != '\0' && i < len)
	{
		dst[i] = src[i];
		i++;
	}
	while (i < len)
	{
		dst[i] = '\0';
		i++;
	}
	return (dst);
}
