/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrave <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/10 16:03:10 by mbrave            #+#    #+#             */
/*   Updated: 2019/01/28 17:17:24 by mbrave           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Allocates (with malloc(3)) and returns an array of “fresh” strings
** (all ending with ’\0’, including the array itself) ob- tained by
** spliting s using the character c as a delimiter. If the allocation
** fails the function returns NULL.
** Example : ft_strsplit("*hello*fellow***students*", ’*’)
** re- turns the array ["hello", "fellow", "students"].
*/

#include "libft.h"

static char		**ft_worksplit(char const *str, char c, char **holder)
{
	size_t		wordlen;
	size_t		j;
	size_t		i;

	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		while (str[i] && str[i] != c)
		{
			wordlen = ft_lenofpart(str, i, c);
			holder[j++] = ft_strsub(str, i, wordlen);
			i = i + wordlen;
		}
		while (str[i] == c)
			++i;
	}
	return (holder);
}

char			**ft_strsplit(char const *str, char c)
{
	int			word;
	char		**holder;

	if (str && c)
	{
		word = ft_numofstrings(str, c);
		if (!(holder = (char **)malloc(sizeof(char *) * (word) + 1)))
			return (NULL);
		holder[word] = NULL;
		holder = ft_worksplit(str, c, holder);
		return (holder);
	}
	return (NULL);
}
