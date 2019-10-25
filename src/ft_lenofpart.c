/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lenofpart.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrave <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/26 23:29:16 by mbrave            #+#    #+#             */
/*   Updated: 2019/01/26 23:54:57 by mbrave           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** personal function made to use with strsplit
** returns the length of a part of the string s
** start is the location to begin from, c is what it's looking for
** like a space or a specified end point
*/

#include "libft.h"

size_t		ft_lenofpart(char const *s, size_t start, char c)
{
	size_t	counter;
	size_t	res;

	counter = 0 + start;
	res = 0;
	while (s[counter] != '\0')
	{
		if (s[counter] == c)
		{
			return (res);
		}
		++counter;
		++res;
	}
	return (res);
}
