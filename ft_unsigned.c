/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsigned.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abahaded <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 18:13:32 by abahaded          #+#    #+#             */
/*   Updated: 2024/11/06 21:09:14 by abahaded         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_unsigned(unsigned int d)
{
	char	a[1024];
	int		i;
	int		j;
	int		y;

	j = 0;
	i = 0;
	if (d == 0)
		return (ft_putchar('0'));
	while (d != 0)
	{
		a[i++] = d % 10 + '0';
		d /= 10;
	}
	while (i--)
	{
		y = ft_putchar(a[i]);
		if (y == -1)
			return (-1);
		j += y;
	}
	return (j);
}
