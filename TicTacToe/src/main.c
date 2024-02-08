#include "../include/tictactoe.h"

char board[3][3];
const char JOUEUR = 'O';
const char JOUEUR2 = 'X';
char WINNER = ' ';


int main ()
{
    reset_board();
    while (WINNER == ' ' && check_cell() != 0){
        print_board();
        player_move();
        WINNER = check_move();
        if (WINNER != ' ' || check_cell() == 0)
            break;
        print_board();
        player_move2();
        WINNER = check_move();
        if (WINNER != ' ' || check_cell() == 0)
            break;
        print_board();
    }
    print_board();
    check_win(WINNER);
    
}