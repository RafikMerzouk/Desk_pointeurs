##
## EPITECH PROJECT, 2020
## CPE_corewar_2019
## File description:
## Makefile
##

SRC	=	pointeurs.c		\
		bg_str_wa.c		\
		bg_strlen.c		\

OBJ	=	$(SRC:.c=.o)

CFLAGS	=	-W -Wall -Wextra -I./include -L./lib/my -lmy

NAME	=	pointeurs

RM	=	rm -f

CC	=	gcc

all	:	$(NAME)

$(NAME)	:	$(OBJ)
	make -C lib/my
	$(CC) -o $(NAME) $(OBJ) $(CFLAGS)

clean	:
	make clean -C lib/my
	$(RM) $(OBJ)

fclean	:	clean
	make fclean -C lib/my
	$(RM) $(NAME)

re	:	fclean all