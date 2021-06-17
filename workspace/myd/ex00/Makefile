# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vlaine <vlaine@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/06/07 16:39:44 by vlaine            #+#    #+#              #
#    Updated: 2021/06/13 18:47:15 by vlaine           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = functions1.c functions2.c functions3.c main.c rushes.c
INCLUDES = rush02.h

all: rush-2 rush-00 rush-01 rush-02 rush-03 rush-04

rush-2:
	gcc -Wall -Werror -Wextra -o rush-2 $(SRC) -I$(INCLUDES)

rush-00:
	gcc -o rush-00 rush00.c functions1.c

rush-01:
	gcc -o rush-01 rush01.c functions1.c

rush-02:
	gcc -o rush-02 rush02.c functions1.c

rush-03:
	gcc -o rush-03 rush03.c functions1.c

rush-04:
	gcc -o rush-04 rush04.c functions1.c

clean:
	rm -f *.o

fclean: clean
	rm -rf rush-2 rush-00 rush-01 rush-02 rush-03 rush-04

re: fclean all
