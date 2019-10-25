/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrave <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/10 16:03:55 by mbrave            #+#    #+#             */
/*   Updated: 2019/01/28 17:10:30 by mbrave           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Allocates (with malloc(3)) and returns a “fresh” string end- ing with ’\0’,
** result of the concatenation of s1 and s2. If the allocation fails the
** function returns NULL.
*/

#include "libft.h"

char		*ft_strjoin(char const *s1, char const *s2)
{
	char		*str;
	size_t		len;
	size_t		j;
	int			k;

	if (s1 && s2)
	{
		j = 0;
		k = 0;
		len = ft_strlen((char *)s1) + ft_strlen((char *)s2);
		str = (char *)malloc(sizeof(char) * (len + 1));
		if (str == NULL)
			return (NULL);
		while (j != (len))
		{
			if (j < len - ft_strlen((char *)s2))
				str[j] = s1[j];
			else
				str[j] = s2[k++];
			++j;
		}
		str[j] = '\0';
		return (str);
	}
	return (NULL);
}
