/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hex_lower.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abahaded <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 18:27:56 by abahaded          #+#    #+#             */
/*   Updated: 2024/11/06 21:10:24 by abahaded         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hex_lower(int n)
{
	char			hex[16] = "0123456789abcdef";
	int				j;
	char			check[1024];
	int				o;
	unsigned int	num;

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
		int y = ft_putchar(check[o]);
		if (y == -1)
			return (-1);
		j += y;
	}
	return (j);
}
