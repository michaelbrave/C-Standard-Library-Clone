/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrave <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/15 21:37:42 by mbrave            #+#    #+#             */
/*   Updated: 2019/01/26 15:04:43 by mbrave           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Recreation of the isprint function from Standard C Library
** Function tests for anyprinting character, including space.
** (man isprint for ascii table of what is accepted)
** function returns zero if the character tests false and returns non-zero
** if the character tests true.
**
** Passed 42 File Checker
*/

#include "libft.h"

int		ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
