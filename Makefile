NAME = so_long

CC = gcc

CFLAGS = -Wall -Wextra -Werror

MLXFLAGS = -lmlx -framework OpenGL -framework Appkit

RM = rm -f

LIBFT = libft/libft.a 

PRINTF = ft_printf/libftprintf.a

SRC =	check_map.c\
		check_path.c\
		check_wall.c\
		load_game.c\
		ft_hook.c\
		load_window.c\
		tools.c\
		so_long.c\
		ft_init.c\
		check_error.c\
		alloc_img.c\
		
OBJS = $(SRC:.c=.o) 

all : $(NAME)

$(NAME) : $(OBJS) $(LIBFT) $(PRINTF) 	
	@$(CC) $(CFLAGS) $(MLXFLAGS) $(OBJS) $(LIBFT) $(PRINTF) -o $(NAME)

$(LIBFT):
	@make -C libft

$(PRINTF):
	@make -C ft_printf

clean :
	@rm -f $(OBJS)
	@make clean -C libft 
	@make clean -C ft_printf 

fclean : clean
	@make fclean -C libft 
	@make fclean -C ft_printf
	@rm -f $(NAME)

re : fclean all

