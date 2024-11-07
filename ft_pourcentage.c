/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pourcentage.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abahaded <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 15:32:53 by abahaded          #+#    #+#             */
/*   Updated: 2024/11/06 15:40:53 by abahaded         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_pourcentage(char a)
{
	char	pourcentage[] = "cspdiuxX";
	int		i;

	i = 0;
	while (pourcentage[i])
	{
		if (pourcentage[i] == a)
			return (0);
		i++;
	}
	return (1);
}
