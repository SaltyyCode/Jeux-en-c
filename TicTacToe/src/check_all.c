#include "../include/tictactoe.h"

int check_cell()
{
    int free = 9; //free space in the board at the start of the game

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            if (board[i][j] != ' ')
                free--;
        }
    }
    return free;
}

int check_move()
{
    for (int i = 0; i < 3; i++){
        if (board[0][i] == board[1][i] && board [1][i] == board [2][i])
            return board[0][i];
         if (board[i][0] == board[i][1] && board [i][1] == board [i][2])
            return board[i][0];
         if (board[0][0] == board[1][1] && board [1][1] == board [2][2])
            return board[0][0];
         if (board[0][2] == board[1][1] && board [1][1] == board [2][0])
            return board[0][2];
    }
    return ' ';
}

void check_win(char WINNER)
{
    if (WINNER == JOUEUR)
        printf("Joueur 1 a gagné\n");
    else if (WINNER == JOUEUR2)
        printf("Joueur 2 a gagné\n");
    else 
        printf("Match Nul");
}
