# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hben-mes <hben-mes@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/22 11:15:34 by hben-mes          #+#    #+#              #
#    Updated: 2023/03/07 16:29:40 by hben-mes         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME= libft.a

SRC=   ft_isalnum.c \
		ft_isalpha.c \
		ft_isascii.c \
		ft_isdigit.c \
		ft_isprint.c \
		ft_strlcat.c \
		ft_strncmp.c \
		ft_strlen.c \
		ft_strlcpy.c \
		ft_strnstr.c \
		ft_strchr.c \
		ft_strrchr.c \
		ft_strdup.c \
		ft_memcmp.c \
		ft_memcpy.c \
		ft_memchr.c \
		ft_memset.c \
		ft_memmove.c \
		ft_calloc.c \
		ft_bzero.c \
		ft_tolower.c \
		ft_toupper.c \
		ft_atoi.c \
		ft_strjoin.c \
		ft_substr.c \
		ft_strtrim.c \
		ft_putchar_fd.c \
		ft_putstr_fd.c \
		ft_putendl_fd.c \
		ft_putnbr_fd.c \
		ft_striteri.c \
		ft_strmapi.c \
		ft_itoa.c \
		ft_split.c \

OBJ=   ft_isalnum.o \
		ft_isalpha.o \
		ft_isascii.o \
		ft_isdigit.o \
		ft_isprint.o \
		ft_strlcat.o \
		ft_strncmp.o \
		ft_strlen.o \
		ft_strlcpy.o \
		ft_strnstr.o \
		ft_strchr.o \
		ft_strrchr.o \
		ft_strdup.o \
		ft_memcmp.o \
		ft_memcpy.o \
		ft_memchr.o \
		ft_memset.o \
		ft_memmove.o \
		ft_calloc.o \
		ft_bzero.o \
		ft_tolower.o \
		ft_toupper.o \
		ft_atoi.o \
		ft_strjoin.o \
		ft_substr.o \
		ft_strtrim.o \
		ft_putchar_fd.o \
		ft_putstr_fd.o \
		ft_putendl_fd.o \
		ft_putnbr_fd.o \
		ft_striteri.o \
		ft_strmapi.o \
		ft_itoa.o \
		ft_split.o \

all: $(NAME)

$(NAME): $(OBJ)
	@ar -rc $(NAME) $(OBJ)
$(OBJ): $(SRC)
	@gcc -Wall -Wextra -Werror -c $(SRC)

clean: 
	@rm -f *.o 
	 
fclean: clean
	@rm -f libft.a

re: fclean all