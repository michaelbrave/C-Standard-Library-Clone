/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrave <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/05 01:04:12 by mbrave            #+#    #+#             */
/*   Updated: 2019/02/02 19:22:59 by mbrave           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Replication of memcmp functoin from Standard C Library
** Function compares byte string s1 against byte string s2. Both
** strings are assumed to be n bytes long.
** function returns zero if the two strings are identical, otherwise
** returns the difference between the first two differing bytes
** (treated as unsigned char values so that '\200' is greater than '\0')
** Zero-length strings are always identical.
*/

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	const unsigned char	*v1;
	const unsigned char	*v2;

	i = 0;
	v1 = (const unsigned char *)s1;
	v2 = (const unsigned char *)s2;
	while (i < n)
	{
		if (v1[i] != v2[i])
			return (v1[i] - v2[i]);
		i++;
	}
	return (0);
}
