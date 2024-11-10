/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pourcentage.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abahaded <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 10:40:11 by abahaded          #+#    #+#             */
/*   Updated: 2024/11/10 11:11:59 by abahaded         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_pourcentage(char f)
{
	int		i;
	char	p[10];

	i = 0;
	ft_strlcpy(p, "cspdiuxX%", 10);
	while (p[i])
	{
		if (p[i] == f)
			return (1);
		i++;
	}
	return (0);
}
