# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ykot <ykot@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/06/16 20:29:09 by ykot              #+#    #+#              #
#    Updated: 2021/06/16 20:29:10 by ykot             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = srcs/main.c srcs/reading.c srcs/solving.c \
	 srcs/exist_ft.c srcs/checking.c
OBJ = main.o reading.o solving.o exist_ft.o checking.o
NAME = bsq
CFLAGS = -Wall -Werror -Wextra
HEADER = includes/

all: $(NAME)

$(NAME):
	gcc $(CFLAGS) -c $(SRC) -I$(HEADER)
	gcc $(CFLAGS) -o $(NAME) $(SRC) -I$(HEADER)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)
	
re: fclean all
