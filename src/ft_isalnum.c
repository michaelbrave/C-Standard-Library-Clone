/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrave <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/15 21:22:48 by mbrave            #+#    #+#             */
/*   Updated: 2019/01/26 14:59:30 by mbrave           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Recreation of isalnum function from the standard C Library
** Function tests for any character for which is alpha or isdigit is true.
** (numbers and letters from ASCII table)
** Function returns zero if the character tests false and returns non-zero
** if the character tests true.
**
** Passed 42 File Checker
*/

#include "libft.h"

int		ft_isalnum(int c)
{
	if (ft_isalpha(c) || ft_isdigit(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
