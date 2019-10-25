/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrave <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/10 16:03:43 by mbrave            #+#    #+#             */
/*   Updated: 2019/01/28 17:13:34 by mbrave           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Allocates (with malloc(3)) and returns a copy of the string given as
** argument without whitespaces at the beginning or at the end of the string.
** Will be considered as whitespaces the following characters ’ ’,
** ’\n’ and ’\t’.
** If s has no whites- paces at the beginning or at the end, the function
** returns a copy of s. If the allocation fails the function returns NULL.
*/

#include "libft.h"

char		*ft_strtrim(char const *s)
{
	char	*str;
	int		len;
	int		j;

	if (s == NULL)
		return (NULL);
	j = 0;
	while (ft_isspace(*s))
		s++;
	len = ft_strlen((char *)s);
	while (len && ft_isspace(s[len - 1]))
		len--;
	str = (char *)malloc(sizeof(char) * ((len) + 1));
	if (str == NULL)
		return (NULL);
	while (j < len)
		str[j++] = *s++;
	str[j] = '\0';
	return (str);
}
