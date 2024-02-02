NAME = libftprintf.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror
SRC = ft_putstr.c ft_putnbr.c ft_putnbr_base.c ft_putchar.c  ft_printf_data.c ft_printf.c\

OBJ = $(SRC:%.c=%.o)

$(NAME) : $(OBJ)
		ar rc $(NAME) $(OBJ)

all : $(NAME)

clean :
		@rm -rf $(OBJ)

fclean :
		@rm -f $(NAME) $(OBJ)

re : fclean all