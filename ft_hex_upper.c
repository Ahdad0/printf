/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hex_upper.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abahaded <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 18:47:22 by abahaded          #+#    #+#             */
/*   Updated: 2024/11/06 21:11:29 by abahaded         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hex_upper(int n)
{
	unsigned int	num;
	char			hex[16] = "0123456789ABCDEF";
	int				j;
	char			check[1024];
	int				o;
	int				y;

	num = n;
	o = 0;
	j = 0;
	if (num == 0)
		return (ft_putchar('0'));
	while (num != 0)
	{
		check[o++] = hex[num % 16];
		num = num / 16;
	}
	while (o--)
	{
		y = ft_putchar(check[o]);
		if (y == -1)
			return (y);
		j += y;
	}
	return (j);
}
