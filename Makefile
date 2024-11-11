SRCS = ft_check.c printf.c ft_putchar.c ft_putstr.c ft_address.c\
	   ft_decimal.c ft_unsigned.c ft_hex_lower.c ft_hex_upper.c\
	   ft_strlen.c ft_itoa.c ft_strlcpy.c ft_strput.c ft_pourcentage.c

NAME = libftprintf.a
OBJS = $(SRCS:.c=.o)
CFLAGS = -Wall -Wextra -Werror
CC = cc

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

fclean: clean
	rm -f $(NAME)

clean:
	rm -f $(OBJS)

re: fclean all

.SECONDARY: $(OBJS)
