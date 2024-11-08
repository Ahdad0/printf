/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abahaded <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 19:19:42 by abahaded          #+#    #+#             */
/*   Updated: 2024/11/08 10:06:11 by abahaded         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	handle_format(const char *format, int *i, va_list args)
{
	int	j;

	j = 0;
	if (format[*i] == '%')
	{
		j += ft_check((char *)format, *i + 1, args);
		if (j == -1)
			return (-1);
		(*i)++;
	}
	else
	{
		if (write(1, &format[*i], 1) == -1)
			return (-1);
		j++;
	}
	return (j);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		i;
	int		len;
	int		j;

	i = 0;
	len = 0;
	va_start(args, format);
	while (format[i])
	{
		j = handle_format(format, &i, args);
		if (j == -1)
			return (-1);
		len += j;
		i++;
	}
	va_end(args);
	return (len);
}
