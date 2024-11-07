/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abahaded <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 16:19:27 by abahaded          #+#    #+#             */
/*   Updated: 2024/11/06 19:00:12 by abahaded         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *s)
{
	int	i;
	int	j;
	int	p;

	j = 0;
	i = 0;
	p = 0;
	if (!s)
	{
		int a = write(1, "(null)", 6);
		return (a);
	}
	while (s[i])
	{
		int pp = ft_putchar(s[i]);
		if (pp == -1)
			return (-1);
		else
			j++;
		i++;
	}
	return (j);
}
