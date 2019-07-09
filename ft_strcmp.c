/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrave <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/16 11:26:27 by mbrave            #+#    #+#             */
/*   Updated: 2018/12/16 11:27:10 by mbrave           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Recreation of strcmp from the Standard C Library
** Function lexicographically compares the null terminated strings s1 & s2
** compares not more than n characters. Is designed for comparing strings
** rather than binary data, characters that appear after a '\0' character are
** not compared.
*/

#include "libft.h"

int		ft_strcmp(char *s1, char *s2)
{
	int		i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
		++i;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
