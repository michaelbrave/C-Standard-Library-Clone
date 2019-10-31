/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isctrl.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrave <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/16 10:20:47 by mbrave            #+#    #+#             */
/*   Updated: 2019/01/26 23:50:17 by mbrave           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Custom function based on the isntrl function from the std library
** Checks if the given character is a control character as classified
** by the currently installed C locale.
*/

#include "libft.h"

int		ft_isctrl(int c)
{
	return ((c <= 31 || c == 127) ? 1 : 0);
}
