/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrave <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/07 15:40:31 by mbrave            #+#    #+#             */
/*   Updated: 2019/02/16 16:38:16 by mbrave           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**I need to do this without recursion, it slows it down and is making it hang.
*/

#include "libft.h"

void		ft_putnbr(int n)
{
	if (n == -2147483648)
		ft_putstr("-2147483648");
	else if (n < 0)
	{
		ft_putchar('-');
		ft_putnbr(-n);
	}
	else if (n >= 10)
	{
		ft_putnbr(n / 10);
		ft_putnbr((n % 10));
	}
	else
		ft_putchar(n + '0');
}
