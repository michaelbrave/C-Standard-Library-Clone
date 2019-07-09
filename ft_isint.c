/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isint.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrave <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/15 11:48:47 by mbrave            #+#    #+#             */
/*   Updated: 2019/02/02 19:07:02 by mbrave           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Custom function to test if a number is between the bounds of
** an integer variable
*/

#include "libft.h"

int		ft_isint(void *num)
{
	long	tmp;

	tmp = (long)num;
	if (tmp >= -2147483648 || tmp <= 2147483647)
		return (1);
	else
		return (0);
}
