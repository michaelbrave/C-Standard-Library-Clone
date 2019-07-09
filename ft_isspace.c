/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isspace.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrave <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/12 10:52:56 by mbrave            #+#    #+#             */
/*   Updated: 2019/01/26 23:49:46 by mbrave           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Custom function to test if a character is a spaceing character
*/

#include "libft.h"

int		ft_isspace(char c)
{
	if (c == ' ' || c == '\t' || c == '\n')
		return (1);
	if (c == '\r' || c == '\v' || c == '\f')
		return (1);
	else
		return (0);
}
