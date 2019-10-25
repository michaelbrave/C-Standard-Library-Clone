/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ispunct.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrave <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/16 10:20:29 by mbrave            #+#    #+#             */
/*   Updated: 2019/01/26 23:51:25 by mbrave           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Custom function to check if a character is a punctuation character
*/

#include "libft.h"

int		ft_ispunct(int c)
{
	if (ft_isalnum(c) != 1 && ft_isgraph(c) == 1)
		return (1);
	else
		return (0);
}
