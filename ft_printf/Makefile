NAME= libftprintf.a

SRC=   ft_printf.c\
		ft_lhex.c\
		ft_putchar.c\
		ft_putnbr.c\
		ft_uhex.c\
		ft_putstr.c\
		ft_putnbr_u.c\

OBJ=    ft_printf.o\
		ft_lhex.o\
		ft_putchar.o\
		ft_putnbr.o\
		ft_uhex.o\
		ft_putstr.o\
		ft_putnbr_u.o\

all: $(NAME)

$(NAME): $(OBJ)
	@ar -rc $(NAME) $(OBJ)
$(OBJ): $(SRC)
	@gcc -Wall -Wextra -Werror -c   $(SRC)

clean:
	@rm -f *.o

fclean: clean
	@rm -f libftprintf.a

re: fclean all