/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_address.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abahaded <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 16:33:57 by abahaded          #+#    #+#             */
/*   Updated: 2024/11/08 10:17:02 by abahaded         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_address(void *p)
{
	int		j;
	int		o;
	size_t	i;
	char	hex[17];
	char	check[1024];

	j = 0;
	o = 0;
	ft_strlcpy(hex, "0123456789abcdef", 17);
	if (!p)
		return (write(1, "0x0", 3));
	i = (size_t)p;
	if (ft_putstr("0x") == -1)
		return (-1);
	j += 2;
	while (i != 0)
	{
		check[o++] = hex[i % 16];
		i /= 16;
	}
	j += ft_strput(check, o);
	return (j);
}
