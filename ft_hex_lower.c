/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hex_lower.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abahaded <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 18:27:56 by abahaded          #+#    #+#             */
/*   Updated: 2024/11/11 18:14:19 by abahaded         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hex_lower(unsigned int num)
{
	char			hex[17];
	int				j;
	char			check[1024];
	int				o;

	ft_strlcpy(hex, "0123456789abcdef", 17);
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
