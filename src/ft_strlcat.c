/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrave <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/19 13:41:22 by mbrave            #+#    #+#             */
/*   Updated: 2019/02/15 13:27:35 by mbrave           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** strlcat() appends string src to the end of dst.  It will append at most
** dstsize - strlen(dst) - 1 characters.  It will then NUL-terminate, unless
** dstsize is 0 or the original dst string was longer than dstsize (in prac-
** tice this should not happen as it means that either dstsize is incorrect
** or that dst is not a proper string).
**
** If the src and dst strings overlap, the behavior is undefined.
**
** return the total length of the string they tried to create.
** For strlcat() that means the initial length of dst plus the length of src.
**
** If the return value is >= dstsize, the output string has been truncated.
** It is the caller's responsibility to handle this.
*/

#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (dst[i] && i < dstsize)
		i++;
	while (src[j] && dstsize > (i + j + 1))
	{
		dst[i + j] = src[j];
		j++;
	}
	if (i != dstsize)
		dst[i + j] = '\0';
	return (i + ft_strlen(src));
}
