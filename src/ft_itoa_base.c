/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrave <mbrave@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/25 16:01:28 by mbrave            #+#    #+#             */
/*   Updated: 2019/09/26 00:44:14 by mbrave           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_numplace(long long n, int base)
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

char		*ft_itoa_helper(long long n, int base, char *hexmap, int count)
{
	char	*str;
	int		neg;

	neg = 0;
	if (n < 0 && (n *= -1))
		neg = 1;
	count = ft_numplace(n, base);
	if (!(str = (char *)ft_strnew(count + neg)))
		return (NULL);
	while (count--)
	{
		str[neg + count] = hexmap[n % base];
		n = n / base;
	}
	if (neg == 1)
		str[0] = '-';
	return (str);
}

char		*ft_itoa_base(long long n, int base)
{
	int		arraycount;
	char	*str;
	char	*hexmap;

	arraycount = 0;
	hexmap = "0123456789abcdef";
	if (n == 0)
	{
		str = ft_strnew(2);
		str[0] = '0';
		str[1] = '\0';
		return (str);
	}
	if (base >= 2 && base <= 16)
	{
		str = ft_itoa_helper(n, base, hexmap, arraycount);
		return (str);
	}
	return (NULL);
}
