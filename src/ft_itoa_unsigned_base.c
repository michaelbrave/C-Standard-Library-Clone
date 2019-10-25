/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_unsigned_base.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrave <mbrave@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/13 12:09:57 by mbrave            #+#    #+#             */
/*   Updated: 2019/09/25 17:29:21 by mbrave           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa_base(long long n, int base)
{
	int				arraycount;
	char			*str;
	char			*hexmap;

	hexmap = ft_strdup("0123456789ABCDEF");
	if (!(base > 2 && base < 16))
		return (NULL);
	arraycount = ft_numplace(n, base);
	if (!(str = (char *)ft_strnew(arraycount)))
		return (NULL);
	while (arraycount--)
	{
		str[arraycount] = hexmap[n % base];
		n = n / base;
	}
	return (str);
}
