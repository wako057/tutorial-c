####################
# Generic Makefile #
####################

CC=gcc
CFLAGS=-W -Wall -ansi -pedantic
LDFLAGS=
NAME=sample

SRC=src/main.c \
    src/my_putchar.c
	
OBJ=$(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) -o $(NAME) $(SRC)

clean:
	rm -f src/*.o

fclean: clean
	rm -f $(NAME)

re: fclean all
