##
## EPITECH PROJECT, 2022
## MAKE_FILE
## File description:
## task01
##

SRC     =	is_alphanum.c	\
		my_compute_power_rec.c	\
		my_compute_square_root.c	\
		my_find_prime_sup.c	\
		my_getnbr.c	\
		my_isneg.c	\
		my_is_prime.c	\
		my_putchar.c	\
		my_put_nbr.c	\
		my_putstr.c	\
		my_revstr.c	\
		my_showmem.c	\
		my_showstr.c	\
		my_sort_int_array.c	\
		my_strcaptalize.c	\
		my_strcat.c	\
		my_strcmp.c	\
		my_strcpy.c	\
		my_str_isalpha.c	\
		my_str_islower.c	\
		my_str_isnum.c	\
		my_str_isprintable.c	\
		my_str_isupper.c	\
		my_strlen.c	\
		my_strlowcase.c	\
		my_strncat.c	\
		my_strncmp.c	\
		my_strncpy.c	\
		my_strstr.c	\
		my_strupcase.c	\
		my_swap.c	\
		my_str_to_world_array.c	\
		my_printf.c	\
		my_strdup.c	\
		my_put_decimal.c	\
		my_put_float.c	\
		my_put_hex.c	\
		my_put_nothing.c	\
		my_put_octal.c	\
		my_put_pointeraddress.c	\
		my_put_s_esp.c	\
		my_put_binary.c	\
		parsing.c	\
		is_modulo.c	\
		my_put_unprint_s.c	\

OBJ     =       $(SRC:.c=.o)

NAME    =       libmy.a

all:	$(NAME)

$(NAME):	$(OBJ)
	ar rc -o $(NAME) $(OBJ)
clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

re: fclean all
