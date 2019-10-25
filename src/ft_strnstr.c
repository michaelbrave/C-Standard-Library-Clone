/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrave <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/19 13:42:20 by mbrave            #+#    #+#             */
/*   Updated: 2019/01/26 22:48:51 by mbrave           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Recreation of strnstr function from the Standard C Library
** Function locates the first occurrence of the null-termi-
** nated string needle in the string haystack, where not more than len char-
** acters are searched.  Characters that appear after a `\0' character are
** not searched.
*/

#include "libft.h"

char		*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	m;
	size_t	s;

	m = 0;
	if (*haystack == '\0' && *needle == '\0')
		return ((char *)haystack);
	while (haystack[m] != '\0')
	{
		s = 0;
		while (needle[s] && haystack[m + s] == needle[s] && m + s < len)
			s++;
		if (needle[s] == '\0')
			return ((char *)haystack + m);
		m++;
	}
	return (NULL);
}
