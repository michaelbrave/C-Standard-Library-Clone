/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrave <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/19 13:39:36 by mbrave            #+#    #+#             */
/*   Updated: 2019/01/26 19:35:49 by mbrave           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Recreation of strchr form the Standard C Library
** Function locates the first occurrence of c (converted to a char)
** in the string pointed to by s. The terminating null character is
** considered to be part of the string; therefoire if c is '\0',
** the functions locate the terminating '\0'
** function returns a pointer to the located character, or null
** if the character does not appear in the string.
*/

#include "libft.h"

char		*ft_strchr(const char *str, int c)
{
	char	holder;

	holder = c;
	while (*str && *str != holder)
		str++;
	if (*str == holder)
		return ((char *)str);
	else
		return (NULL);
}
