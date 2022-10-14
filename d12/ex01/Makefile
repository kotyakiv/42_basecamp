# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ykot <ykot@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/06/09 16:41:38 by ykot              #+#    #+#              #
#    Updated: 2021/06/10 19:30:43 by ykot             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_cat
SRC = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_cat.c
HEADER = includes/
OBJ = ft_putchar.o ft_putstr.o ft_cat.o
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