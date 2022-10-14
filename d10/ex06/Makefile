SRC = srcs/ft_atoi.c srcs/ft_putnbr.c srcs/ft_putchar.c \
	srcs/ft_putstr.c srcs/ft_strlen.c 
OBJ = ft_putnbr.o ft_putstr.o ft_atoi.o ft_putchar.o ft_strlen.o 
NAME = do-op
CFLAGS = -c -Wall -Werror -Wextra
HEADER = includes/

all: $(NAME)

$(NAME):
	gcc $(CFLAGS) $(SRC) main.c -I$(HEADER)
	gcc -o $(NAME) $(OBJ) main.o

clean:
	rm -f $(OBJ) main.o

fclean: clean
	rm -f $(NAME)
	
re: fclean all