/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrave <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/07 15:39:06 by mbrave            #+#    #+#             */
/*   Updated: 2019/02/02 19:22:34 by mbrave           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Outputs the string s to the standard output followed by a ’\n’.
*/

#include "libft.h"

void		ft_putendl(char const *s)
{
	ft_putstr(s);
	ft_putchar('\n');
}
