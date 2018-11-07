##
## EPITECH PROJECT, 2018
## 101pong_2018
## File description:
## The Makefile of the 101pong MAT project
##

NAME = 101pong

SRC =	pong.c

OBJ = $(SRC:.c=.o)

all:	$(NAME)

$(NAME):	$(OBJ)
	make -C lib/my
	gcc -o $(NAME) $(SRC) -Llib/my -lmy -Iinclude

clean:
	make clean -C lib/my

fclean:	clean
	rm -f $(NAME)
	make fclean -C lib/my

re: fclean all

.phony: all clean fclean $(NAME)
