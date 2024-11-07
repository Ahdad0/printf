/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abahaded <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 19:19:42 by abahaded          #+#    #+#             */
/*   Updated: 2024/11/07 18:53:17 by abahaded         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		i;
	int		len;
	int		j;
	int		a;

	i = 0;
	len = 0;
	j = 0;
	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			j = ft_check((char *)format, i + 1, args);
			if (j == -1)
				return (-1);
			len = len + j;
			i++;
		}
		else
		{
			a = write(1, &format[i], 1);
			if (a == -1)
				return (-1);
			len++;
		}
		i++;
	}
	va_end(args);
	return (len);
}
