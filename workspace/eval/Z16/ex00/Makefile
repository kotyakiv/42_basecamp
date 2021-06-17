# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ccariou <ccariou@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/06/07 10:23:08 by ccariou           #+#    #+#              #
#    Updated: 2021/06/07 12:35:06 by ccariou          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRC = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c srcs/ft_strlen.c srcs/ft_swap.c
HEADERS = includes
OBJECT = ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o

all : lib

lib:
	gcc -I $(HEADERS) -c $(SRC)
	ar rc $(NAME) $(OBJECT)

clean:
	rm -f $(OBJECT)

fclean:
	rm -f $(NAME) $(OBJECT)

re: fclean all