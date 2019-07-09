/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrave <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/19 13:40:19 by mbrave            #+#    #+#             */
/*   Updated: 2019/01/26 22:40:17 by mbrave           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** memory allocaiton and string duplicaiton
** returns pointer to the new string, null if it can't
** like strcpy but with heap allocation
*/

#include "libft.h"

char		*ft_strdup(const char *s1)
{
	char		*s2;
	size_t		size;

	size = ft_strlen((char *)s1) + 1;
	if (!(s2 = malloc(size * sizeof(char))))
		return (NULL);
	s2 = (char *)ft_memcpy(s2, s1, size);
	s2[size] = '\0';
	return (s2);
}
