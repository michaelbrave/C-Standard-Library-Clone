/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrave <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/19 13:42:37 by mbrave            #+#    #+#             */
/*   Updated: 2019/01/26 22:47:05 by mbrave           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Recreation of strchr form the Standard C Library
** Function locates the first occurrence of c (converted to a char)
** in the string pointed to by s. The terminating null character is
** considered to be part of the string; therefoire if c is '\0',
** the functions locate the terminating '\0'
** strrchr locates the last occurance of c
** function returns a pointer to the located character, or null
** if the character does not appear in the string.
*/

#include "libft.h"

char		*ft_strrchr(const char *str, int c)
{
	char	holder;
	int		i;

	holder = c;
	i = ft_strlen(str);
	if (holder == '\0')
		return ((char *)(str + i));
	while (str[i] != holder && i != 0)
		i--;
	if (str[i] == holder)
		return ((char *)(str + i));
	else
		return (NULL);
}
