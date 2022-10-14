# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ykot <ykot@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/06/07 15:24:31 by ykot              #+#    #+#              #
#    Updated: 2021/06/07 19:43:21 by ykot             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = srcs/ft_strlen.c srcs/ft_swap.c srcs/ft_strcmp.c \
	 srcs/ft_putchar.c srcs/ft_putstr.c
OBJ = ft_strlen.o ft_swap.o ft_strcmp.o ft_putstr.o ft_putchar.o
NAME = libft.a
CFLAGS = -c -Wall -Werror -Wextra
HEADER = includes/

all: $(NAME)

$(NAME):
	gcc $(CFLAGS) $(SRC) -I$(HEADER)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)
	
re: fclean all
