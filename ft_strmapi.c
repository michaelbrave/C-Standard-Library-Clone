/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrave <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/10 16:08:16 by mbrave            #+#    #+#             */
/*   Updated: 2019/02/02 19:28:08 by mbrave           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Applies the function f to each character of the string passed as argument
** by giving its index as first argument to create a “fresh” new string
** (with malloc(3)) resulting from the suc- cessive applications of f.
*/

#include "libft.h"

char		*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*ans;
	unsigned int	i;
	int				size;

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
			ans[i] = f(i, s[i]);
			++i;
		}
		ans[i] = '\0';
		return (ans);
	}
	return (NULL);
}
