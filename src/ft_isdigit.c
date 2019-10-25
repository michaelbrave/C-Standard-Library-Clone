/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrave <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/15 11:48:51 by mbrave            #+#    #+#             */
/*   Updated: 2019/01/26 14:58:51 by mbrave           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Recreation of the isdigit function from Standard C Library
** Function tests for a decimal digit character. Regardless of locale,
** this includes the followering characters only {0, 1, 2, 3, 4, 5, 6, 7, 8, 9}
** Function returns zerio if the character tests false and returns non-zer if
** the character tests true.
*/

#include "libft.h"

int		ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
