/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrave <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/16 17:56:28 by mbrave            #+#    #+#             */
/*   Updated: 2019/01/28 14:29:07 by mbrave           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Recreation of toupper function from Standard C Library
** function converts a lower-case letter to the corresponding upper-case
** letter. The argument must be representable as an unsigned char or the value
** of EOF.
** If the argument is a lower-case letter, the function returns the
** corresponding upper-case letter if there is one; otherwise, the argument
** is returned unchanged.
*/

#include "libft.h"

int		ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		c = c - 32;
	}
	return (c);
}
