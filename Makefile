##
## EPITECH PROJECT, 2022
## hunter
## File description:
## truc
##

NAME = my_hunter

CFLAGS = -Wall -Werror -Wextra -W -lcsfml-graphics -lcsfml-system -lcsfml-window

CC = gcc

SRC =	mini_hunter.c	\
	mouse.c	\
	create_sprite.c	\
	animation.c	\
	hit_box.c	\
	scale.c	\
	menu.c	\
	all.c	\
	get_nbr.c	\

all:
	make -C ./lib
	gcc -o $(NAME) $(SRC) -L./lib -lmy $(CFLAGS)

clean:
	find -type f -name "#*#" -delete -o \
	-type f -name "*~" -delete -o -type f -name "*.o" -delete -o \
	-type f -name "*.gc*" -delete

fclean: clean
	rm -f $(NAME)

re: fclean all
