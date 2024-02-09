NAME	=	TicTacToe

CFLAGS	=	-W -Wall -Wextra

SRC =	src/players_move.c \
		src/print_and_reset_board.c \
		src/main.c \
		src/check_all.c \
		src/play_bot.c 


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