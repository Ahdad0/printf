/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strput.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abahaded <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 10:08:17 by abahaded          #+#    #+#             */
/*   Updated: 2024/11/08 10:27:39 by abahaded         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_strput(char *s, int o)
{
	int	i;
	int	j;

	i = 0;
	while (o--)
	{
		j = ft_putchar(s[o]);
		if (j == -1)
			return (-1);
		i++;
	}
	return (i);
}