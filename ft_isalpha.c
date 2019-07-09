/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrave <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/15 21:26:14 by mbrave            #+#    #+#             */
/*   Updated: 2019/01/26 14:57:51 by mbrave           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Recreation of the isalpha function from the Standard C Library
** Function tests for any character for which isupper or islower is true
** (Alphabetical letters from the ASCII Table)
** Function returns zero if the character tests false and returns non-zero
** if the character tests true.
**
** Passed 42 File Checker
*/

#include "libft.h"

int		ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
