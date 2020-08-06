##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## makefile
##

SRC	=	my_hunter.c	\
		src/my_itoa.c	\
		src/my_putstr.c	\
		src/my_move_rect.c\
		src/my_display_window.c\
		src/my_set_text.c	\
		src/my_set_texture.c	\
		src/my_draw_window.c	\
		src/my_move.c	\
		src/my_mouse_button.c	\
		src/my_manage_event.c	\
		src/my_initiate_game.c	\

OBJ	=	$(SRC:.c=.o)

NAME	=	my_hunter

CFLAGS	=	-Wall -Wextra

all: $(NAME)

$(NAME):	$(OBJ)
	@ gcc -o $(NAME) $(OBJ) -l csfml-window -l csfml-graphics -l csfml-audio -l csfml-system

clean:
	@ rm -f $(OBJ)
	@ echo "[INFO]: Removed compiled files"
	@ rm -f *~ *#
	@ echo "[INFO]: Removed useless files"

fclean:	clean
	@ rm -f $(NAME)
	@ echo "[INFO]: Removed binary ->" $(NAME)

re: fclean all

.PHONY: all re clean fclean
