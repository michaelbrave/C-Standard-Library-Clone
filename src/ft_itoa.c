/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrave <mbrave@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/16 17:56:40 by mbrave            #+#    #+#             */
/*   Updated: 2019/09/25 20:08:11 by mbrave           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Allocate (with malloc(3)) and returns a “fresh” string ending with ’\0’
** representing the integer n given as argument. Negative numbers must be
** supported. If the allocation fails, the function returns NULL.
*/

#include "libft.h"

char		*ft_itoa(intmax_t n)
{
	int				arraycount;
	int				neg;
	unsigned long	tmp;
	char			*str;
	int				base;

	neg = ((n < 0) ? 1 : 0);
	base = 10;
	if (neg == 1)
		tmp = n * -1;
	else
		tmp = n;
	arraycount = ft_numplace(tmp, base);
	str = (char *)ft_strnew(arraycount + neg);
	if (str == NULL)
		return (NULL);
	while (arraycount--)
	{
		str[neg + arraycount] = (tmp % base) + '0';
		tmp = tmp / base;
	}
	if (neg == 1)
		str[0] = '-';
	return (str);
}
