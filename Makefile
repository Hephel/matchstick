##
## EPITECH PROJECT, 2020
## Makefile
## File description:
## Makefile my_printf
##

SRC	=	src/main.c	\
		src/error.c	\
		src/create_map.c	\
		src/input.c	\
		src/change_map.c	\
		src/check_input.c	\
		src/rand_ai.c	\
		src/end.c

OBJ     =       $(SRC:.c=.o)

CPPFLAGS	=	-I./include/

NAME	=	matchstick

$(NAME): $(OBJ)
	make -C ./lib/my
	gcc $(OBJ) -o $(NAME) -L./lib/my/ -lmy

all: $(NAME)

clean:
	rm -f $(OBJ)
	make -C ./lib/my clean

fclean: clean
	rm -f $(NAME)
	make -C ./lib/my fclean

re: fclean all

.PHONY:	all clean fclean re
