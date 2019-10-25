/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrave <mbrave@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/15 20:49:42 by mbrave            #+#    #+#             */
/*   Updated: 2019/09/25 19:05:05 by mbrave           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Recreation of strlen function from Standard C Library
** Funciton computers the lenght of the string s.
** Function attempts to compute the length os s, but never scans beyond the
** first maxlen bytes of s.
** returns the number of characters that precede the terminating NUL character
** returns etiher the same result as strlen or maxlen, whichever is smaller.
*/

#include "libft.h"

size_t		ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	if (str == NULL || *str == '\0')
		return (0);
	while (str[i])
		++i;
	return (i);
}
