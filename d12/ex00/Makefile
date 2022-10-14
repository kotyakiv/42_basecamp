# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ykot <ykot@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/06/09 13:38:05 by ykot              #+#    #+#              #
#    Updated: 2021/06/10 18:56:54 by ykot             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = display_file
SRC = srcs/ft_putchar.c srcs/ft_putstr.c \
	srcs/display_file.c srcs/ft_strcmp.c
HEADER = includes/
OBJ = ft_putchar.o ft_putstr.o display_file.o ft_strcmp.o
FLAGS =  -Wall -Werror -Wextra
all: $(NAME)

$(NAME):
	gcc $(FLAGS) -c $(SRC) -I$(HEADER)
	gcc $(FLAGS) -o $(NAME) $(OBJ)
	
clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)
	
re: fclean all