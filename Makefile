##
## EPITECH PROJECT, 2020
## MAKEFILE FOR INFINITE ADD
## File description:
## NO DESCRIPTION FOUND
##

OBJ = $(SRC:.c=.o)

NAME =	infin_add

all: $(NAME)

$(NAME): $(OBJ)
	gcc -o infin_add infin_add.c -lmy -L./lib/

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re:	fclean all
