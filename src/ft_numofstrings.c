/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_numofstrings.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrave <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/26 23:36:45 by mbrave            #+#    #+#             */
/*   Updated: 2019/01/26 23:57:00 by mbrave           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** custom funciton to help with strspl, it determines the amount of words
** so how many strings to make from the master string
** s is the string, c is the seperator, like a space or something
*/

#include "libft.h"

size_t		ft_numofstrings(char const *s, char c)
{
	size_t	word;

	word = 0;
	while (*s)
	{
		if (*s != c)
		{
			while (*s && *s != c)
				s++;
			word++;
		}
		while (*s == c)
			s++;
	}
	return (word);
}
