NAME	=	Snake

CFLAGS	=	-W -Wall -Wextra

SRC =	src/fill_and_print.c \
		src/my_char.c \
		src/main.c \


OBJ = $(SRC:.c=.o)

all:	$(NAME)

$(NAME):	$(OBJ)
	gcc $(OBJ) -o $(NAME) -I../include $(CFLAGS) -g3

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re