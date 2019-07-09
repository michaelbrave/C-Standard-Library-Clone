/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrave <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/19 13:40:02 by mbrave            #+#    #+#             */
/*   Updated: 2019/01/26 22:40:56 by mbrave           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Recreation of strcpy from Standard C Library
** Function copies the string src to dst (including the '\0' character)
** Function copiies at most len characters from src into dst.
** If src is less than len charactyers long, the remainder of dst is
** filled with '/0' characters. Otherwise, dst is not terminated.
** the source and destination strings should overlap, as the behavior is
** undefined.
** function returns dst. Returns a pointer to the terminating '\0' character
** of dst. If function does not terminate dst with a NUL character, it
** instead returns a pointer to dst[n] (not necissarily a valid memory
** location)
*/

#include "libft.h"

char		*ft_strcpy(char *dst, const char *src)
{
	int		i;

	i = 0;
	while (src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}
