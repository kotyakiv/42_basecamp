# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: atenhune <atenhune@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/06/07 07:44:06 by atenhune          #+#    #+#              #
#    Updated: 2021/06/08 18:16:52 by atenhune         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRC = srcs/
INCLUDES = includes/
FUNCTIONS = ft_putchar.c ft_putstr.c ft_strcmp.c ft_swap.c ft_strlen.c
OBJ = ft_putchar.o ft_putstr.o ft_strcmp.o ft_swap.o ft_strlen.o

all: $(NAME)

$(NAME):
	gcc -Wall -Wextra -Werror -c $(SRC)ft_putchar.c $(SRC)ft_putstr.c $(SRC)ft_strcmp.c $(SRC)ft_swap.c $(SRC)ft_strlen.c -I$(INCLUDES)
	ar rc $(NAME) $(OBJ)

clean:
	rm -f $(NAME)
	
fclean: clean
	rm -f $(OBJ)

re: fclean all
