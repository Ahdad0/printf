/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_p.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abahaded <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 21:59:10 by abahaded          #+#    #+#             */
/*   Updated: 2024/11/07 20:49:04 by abahaded         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int ft_minicheck(char *format, int index, va_list args)
{
	int	i;
	int j;

	j = 0;
	i = 0;
	if (format[index] == '%')
	{
		if (ft_putchar('%') == -1)
			return (-1);
		i++;
	}
	else if (format[index] == 'c')
	{
		if (ft_putchar(va_arg(args, int) == -1))
			return (-1);
		i++;
	}
	else
	{
		j = ft_smallcheck(format, index, args);
		if (j == -1)
			return (-1);
		i += j;
	}
	return (i);
}

static int	ft_smallcheck(char *format, int index, va_list args)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (format[index] == 's')
	{
		j = ft_putstr(va_arg(args, char *));
		if (j == -1)
			return (-1);
		i += j;
	}
	else if (format[index] == 'X')
		i += ft_hex_upper(va_arg(args, int));
	else if (format[index] == 'x')
		i += ft_hex_lower(va_arg(args, int));
	else if (format[index] == 'd' || format[index] == 'i')
		i += ft_decimal(va_arg(args, int));
	else if (format[index] == 'u')
		i += ft_unsigned(va_arg(args, unsigned int));
	return (i);
}

int ft_check(char *format, int index, va_list args)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (format[index] == 'p')
	{
		j = ft_address(va_arg(args, void *));
		if (j == -1)
			return (-1);
		i += j;
	}
	else
	{
		j = ft_minicheck(format, index, args);
		if (j == -1)
			return (-1);
		i += j;
	}
	return (i);
}
