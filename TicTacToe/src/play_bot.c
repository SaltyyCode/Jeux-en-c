#include "../include/tictactoe.h"

int my_eval (char board[3][3])
{
    for (int r = 0; r < 3; r++){
        if (board[r][0] == board[r][1] && board[r][1] == board[r][2]){
            if (board[r][0] == BOT)
                return +10;
            else if (board[r][0] == JOUEUR)
                return -10;
        }
    }
    for (int c = 0; c < 3; c++){
        if (board[0][c] == board[1][c] && board[1][c] == board[2][c]){
            if (board[0][c] == BOT)
                return +10;
            else if (board[0][c] == JOUEUR)
                return -10;
        }
    }
    if (board[0][0] == board[1][1] && board[1][1] == board[2][2] || board[0][2] == board[1][1] && board[1][1] == board[2][0]){
        if (board[1][1] == BOT)
            return +10;
        else if (board[1][1] == JOUEUR)
            return -10;
    }
    return 0;
}
