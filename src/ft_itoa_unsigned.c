/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_unsigned.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrave <mbrave@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/25 17:30:17 by mbrave            #+#    #+#             */
/*   Updated: 2019/09/25 22:37:08 by mbrave           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_numplace_unsigned(unsigned long long n, int base)
{
	int i;

	i = 0;
	if (n == 0)
		i++;
	while (n != 0)
	{
		n = (n / base);
		i++;
	}
	return (i);
}

char	*ft_itoa_unsigned(unsigned long long n, int base)
{
	int					arraycount;
	unsigned long long	tmp;
	char				*str;

	tmp = n;
	if (n == 0)
	{
		str = ft_strnew(2);
		str[0] = '0';
		str[1] = '\0';
		return (str);
	}
	arraycount = ft_numplace_unsigned(tmp, base);
	if (!(str = (char *)ft_strnew(arraycount + 1)))
		return (NULL);
	str[arraycount + 1] = '\0';
	while (arraycount--)
	{
		if ((tmp % base) > 9)
			str[arraycount] = (tmp % base) + 87;
		else
			str[arraycount] = (tmp % base) + '0';
		tmp = tmp / base;
	}
	return (str);
}
