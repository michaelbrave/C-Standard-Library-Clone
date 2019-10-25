/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrave <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/16 17:56:17 by mbrave            #+#    #+#             */
/*   Updated: 2019/01/28 14:28:07 by mbrave           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Recreation of the tolower function from the Standard C Library
** function converts an upper-case letter to the corresponding lower-case
** letter.
** If the argument is an upper-case letter, the function returns the
** corresponding lower-case letter if there is one; otherwise, the argument
** is returned unchanged.
*/

#include "libft.h"

int		ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		c = c + 32;
	}
	return (c);
}
