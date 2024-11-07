# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abahaded <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/04 22:27:44 by abahaded          #+#    #+#              #
#    Updated: 2024/11/07 09:49:11 by abahaded         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = ft_check.c printf.c ft_putchar.c ft_putstr.c ft_address.c\
	   ft_decimal.c ft_unsigned.c ft_hex_lower.c ft_hex_upper.c\
	   ft_strlen.c ft_itoa.c ft_pourcentage.c ft_strlcpy.c

NAME = libftprintf.a
OBJS = $(SRCS:.c=.o)
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

fclean: clean
	rm -f $(NAME)

clean:
	rm -f $(OBJS)

re: fclean all

.PHONY: all clean fclean re

.SECONDARY: $(OBJS)
