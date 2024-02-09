#include "../include/tictactoe.h"

void bot_move() // utiliser rand ou srand
{
    int x;
    int y;
    srand(time(0));

    if (check_cell() > 0){
        do
        {
            x = rand() % 3;
            y = rand() % 3;
            if (board[x][y] != ' '){
            }else {
                board[x][y] = BOT;
                break;
            }
        } while (board[x][y] != ' ');
    }
}