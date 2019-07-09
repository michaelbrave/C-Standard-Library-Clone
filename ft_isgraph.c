/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isgraph.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrave <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/16 10:20:39 by mbrave            #+#    #+#             */
/*   Updated: 2019/01/26 23:50:57 by mbrave           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Custom function based on isgraph function from std library.
** Checks if the given character is graphic (has graphical representation)
** as classified by the currently installed c locale.
** Digits, uppercase, lowercase, punctuation characters
** as an example, " " would not be a graphical character.
**trying a different style of code, minimum typing and ternary operators
*/

#include "libft.h"

int		ft_isgraph(int c)
{
	return ((c > 33 && c <= 126) ? 1 : 0);
}
