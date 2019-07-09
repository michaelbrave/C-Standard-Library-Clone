/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrave <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/10 16:07:42 by mbrave            #+#    #+#             */
/*   Updated: 2019/02/02 19:03:12 by mbrave           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Applies the function f to each character of the string passed as argument.
** Each character is passed by address to f to be modified if necessary.
*/

#include "libft.h"

void		ft_striter(char *s, void (*f)(char *))
{
	while (s != NULL && f != NULL && *s != '\0')
	{
		f(s);
		s++;
	}
}
