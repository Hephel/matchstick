##
## EPITECH PROJECT, 2020
## Makefile
## File description:
## Compiles my libmy
##

SRC	=	my_compute_power_rec.c	\
		my_compute_square_root.c	\
		my_find_prime_sup.c	\
		my_getnbr.c	\
		my_is_prime.c	\
		my_isneg.c	\
		my_put_nbr.c	\
		my_putchar.c	\
		my_putstr.c	\
		my_revstr.c	\
		my_showmem.c	\
		my_showstr.c	\
		my_sort_int_array.c	\
		my_str_isalpha.c	\
		my_str_islower.c	\
		my_str_isnum.c	\
		my_str_isprintable.c	\
		my_str_isupper.c	\
		my_strcapitalize.c	\
		my_strcat.c	\
		my_strcmp.c	\
		my_strcpy.c	\
		my_strlen.c	\
		my_strlowcase.c	\
		my_strncat.c	\
		my_strncmp.c	\
		my_strncpy.c	\
		my_strstr.c	\
		my_strupcase.c	\
		my_swap.c	\
		b_flag.c	\
		c_flag.c	\
		d_i_flag.c	\
		hd_flag.c	\
		ld_flag.c	\
		my_nb_len.c	\
		my_pow.c	\
		my_printf.c	\
		my_printf2.c	\
		o_flag.c	\
		s_flag.c	\
		u_flag.c	\
		x_flag.c	\
		x_maj_flag.c	\

OBJ	=	$(SRC:.c=.o)

NAME	=	libmy.a

all:	$(NAME)

$(NAME):	$(OBJ)
	gcc -c $(SRC)
	ar rc $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re:	fclean all

.PHONY: all clean fclean re