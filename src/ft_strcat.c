/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrave <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/19 13:39:23 by mbrave            #+#    #+#             */
/*   Updated: 2019/02/15 14:32:58 by mbrave           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** function append a copy of the null-terminated string s2 to the end of the
** null-terminated string s1, then add a terminating '\0'. The string s1 must
** have suffient space to hold the result.
** function returns the pointer s1.
*/

#include "libft.h"

char		*ft_strcat(char *str1, const char *str2)
{
	int		len;

	len = ft_strlen(str1);
	if (*str2 == '\0')
		return (str1);
	while (*str2)
	{
		str1[len] = *str2++;
		len++;
	}
	str1[len] = '\0';
	return (str1);
}
