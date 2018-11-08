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
	gcc -o $(NAME) $(SRC) -lm

clean:
	rm *.o
fclean:
	rm -f $(NAME)
	make clean

re: fclean all

.phony: all clean fclean $(NAME)
