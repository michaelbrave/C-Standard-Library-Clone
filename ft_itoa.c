/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrave <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/16 17:56:40 by mbrave            #+#    #+#             */
/*   Updated: 2019/01/28 15:16:55 by mbrave           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Allocate (with malloc(3)) and returns a “fresh” string ending with ’\0’
** representing the integer n given as argument. Negative numbers must be
** supported. If the allocation fails, the function returns NULL.
*/

#include "libft.h"

char		*ft_itoa(int n)
{
	int		arraycount;
	int		neg;
	long	tmp;
	char	*str;

	neg = 0;
	tmp = n;
	if (tmp < 0)
	{
		tmp = tmp * -1;
		neg = 1;
	}
	arraycount = ft_numplace(tmp);
	str = (char *)ft_strnew(arraycount + neg);
	if (str == NULL)
		return (NULL);
	while (arraycount--)
	{
		str[neg + arraycount] = (tmp % 10) + '0';
		tmp = tmp / 10;
	}
	if (neg == 1)
		str[0] = '-';
	return (str);
}
