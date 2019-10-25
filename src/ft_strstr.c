/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrave <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/19 13:43:10 by mbrave            #+#    #+#             */
/*   Updated: 2019/02/04 18:21:01 by mbrave           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Recreation of the strstr function from the Standard C Library
** The strstr() function locates the first occurrence of the null-terminated
** string needle in the null-terminated string haystack.
**
** If needle is an empty string, haystack is returned; if needle occurs
** nowhere in haystack, NULL is returned; otherwise a pointer to the first
** character of the first occurrence of needle is returned.
*/

#include "libft.h"

char		*ft_strstr(const char *haystack, const char *needle)
{
	int		mcnt;
	int		scnt;

	mcnt = 0;
	if (*haystack == '\0' && *needle == '\0')
		return ((char *)haystack);
	while (haystack[mcnt])
	{
		scnt = 0;
		while (needle[scnt] && haystack[mcnt + scnt] == needle[scnt])
			scnt++;
		if (needle[scnt] == '\0')
			return ((char *)haystack + mcnt);
		mcnt++;
	}
	return (NULL);
}
