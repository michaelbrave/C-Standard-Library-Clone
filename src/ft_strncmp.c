/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrave <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/25 21:38:43 by mbrave            #+#    #+#             */
/*   Updated: 2019/01/26 23:05:15 by mbrave           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** compare strings s1 and s2 not more than n characters
** characters that appear after a '\0' are not compared
** return an integer greater than equal to or less than 0
** depending on how different the strings are
*/

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] == s2[i] && s1[i] && s2[i] && i < n - 1)
		++i;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
