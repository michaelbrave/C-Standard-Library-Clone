/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrave <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/10 16:08:07 by mbrave            #+#    #+#             */
/*   Updated: 2019/02/02 19:21:16 by mbrave           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Applies the function f to each character of the string given as argument
** to create a “fresh” new string (with malloc(3)) resulting from the
** successive applications of f.
*/

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*ans;
	int		i;
	int		size;

	if (s && f)
	{
		size = ft_strlen(s);
		ans = (char *)malloc(sizeof(char) * size + 1);
		i = 0;
		if (s == NULL || *s == '\0' || f == NULL)
			return (NULL);
		if (ans == NULL)
			return (NULL);
		while (s[i] != '\0')
		{
			ans[i] = f(s[i]);
			++i;
		}
		ans[i] = '\0';
		return (ans);
	}
	return (NULL);
}
