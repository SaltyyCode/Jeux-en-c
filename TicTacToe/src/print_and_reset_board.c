#include "../include/tictactoe.h"

void reset_board()
{
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++)
            board[i][j] = ' ';
    }
}

void print_board()
{
    printf("%c  | %c | %c", board[0][0], board[0][1], board[0][2]);
    printf("\n---|---|---\n");
    printf("%c  | %c | %c", board[1][0], board[1][1], board[1][2]);
    printf("\n---|---|---\n");
    printf("%c  | %c | %c", board[2][0], board[2][1], board[2][2]);
    printf("\n");
}