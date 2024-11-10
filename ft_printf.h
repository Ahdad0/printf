/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abahaded <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 19:18:29 by abahaded          #+#    #+#             */
/*   Updated: 2024/11/10 10:43:46 by abahaded         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

int		ft_printf(const char *format, ...);
int		ft_check(char *format, int index, va_list args);
int		ft_putchar(char c);
int		ft_putstr(char *s);
int		ft_address(void *s);
int		ft_decimal(int d);
int		ft_unsigned(unsigned int d);
int		ft_hex_lower(int num);
int		ft_hex_upper(int num);
size_t	ft_strlen(const char *s);
char	*ft_itoa(int n);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);
int		ft_strput(char *s, int o);
int		ft_pourcentage(char f);

#endif
