/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrave <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/16 03:24:55 by mbrave            #+#    #+#             */
/*   Updated: 2019/01/26 16:18:35 by mbrave           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Recreation of strncat function from Standard C Library
** Function appends a copy of the null-terminated strin s2 to the end of the
** null-terminated string s1, then adds a terminating '\0'. The string s1 must
** have sufficient space to hold the result.
** Function appends not more than n characters from s2, and then adds a
** terminating '\0'.
** the source and destination strings should not overlap, as the behavior is
** undefined.
** return the pointer s1.
*/

#include "libft.h"

char		*ft_strncat(char *str1, const char *str2, size_t n)
{
	int		len;

	len = ft_strlen(str1);
	while (*str2 != '\0' && n != 0)
	{
		str1[len] = *str2++;
		len++;
		n--;
	}
	str1[len] = '\0';
	return (str1);
}
