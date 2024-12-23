NAME = libftprintf.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
SRC = 	 ft_printf.c ft_putchar.c ft_putnbr.c ft_putstr.c ft_putptr.c\
ft_putu.c ft_puthex.c ft_strchr.c	
OBJ = $(SRC:.c=.o)

$(NAME):
	$(CC) $(CFLAGS) -c $(SRC)
		ar rc $(NAME) $(OBJ)

all: $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re