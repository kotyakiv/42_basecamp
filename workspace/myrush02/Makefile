# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ykot <ykot@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/06/12 20:49:20 by ykot              #+#    #+#              #
#    Updated: 2021/06/12 20:50:28 by ykot             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = display_file
SRC = srcs/function.c srcs/rush00.c \
	srcs/rush01.c srcs/rush02.c
HEADER = includes/
OBJ = function.o rush00.o rush01.o rush02.o
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