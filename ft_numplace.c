/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_numplace.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrave <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/26 23:40:13 by mbrave            #+#    #+#             */
/*   Updated: 2019/01/27 00:01:34 by mbrave           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** personal choice function, supports itoa
** finds how many collumns a number has, support function for ft_itoa
*/

int		ft_numplace(int n)
{
	int i;

	i = 0;
	if (n == 0)
		i++;
	while (n != 0)
	{
		n = (n / 10);
		i++;
	}
	return (i);
}
