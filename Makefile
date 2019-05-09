##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## compile
##

NAME 	=	sort_words

SRC	=	src/main.c			\
		src/additionnal_function.c

OBJ	=	$(SRC:.c=.o)

CFLAGS	=	-Werror -Wall -Wextra
CFLAGS 	+=	-I ./include

all:		$(NAME)

$(NAME):	$(OBJ)
		gcc $(CFLAGS) -o $(NAME) $(OBJ) $(CFLAG)

debug:		CFLAGS += -g3
debug:		re

clean:
		rm -f $(OBJ)

fclean:		clean
		rm -f $(NAME) rm -f *~  rm *#

re:		fclean all

.PHONY:		all clean fclean re
