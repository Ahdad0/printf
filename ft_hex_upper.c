/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hex_upper.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abahaded <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 18:47:22 by abahaded          #+#    #+#             */
/*   Updated: 2024/11/08 10:38:28 by abahaded         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hex_upper(int n)
{
	char			hex[17];
	int				j;
	char			check[1024];
	int				o;
	unsigned int	num;

	ft_strlcpy(hex, "0123456789ABCDEF", 17);
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
	j += ft_strput(check, o);
	return (j);
}
