#include "../include/tictactoe.h"

char board[3][3];
const char JOUEUR = 'O';
const char JOUEUR2 = 'X';
const char BOT = 'X';
char WINNER = ' ';

int main(int ac, char **av)
{
    char continuer = 'O';

    if (ac == 2 && av[1][0] == '-' && av[1][1 == 'h']){
        printf("TicTacToe game, soon playable against computer :)\n");
        printf("Usage : ./TicTacToe\n");
        return 0;
    }
    if (ac != 1)
        return 84;

    while (continuer == 'O' || continuer == 'o') {
        reset_board();
        WINNER = ' ';


        while (WINNER == ' ' && check_cell() != 0) {
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
        }

        print_board();
        check_win(WINNER);
        printf("\nNouvelle partie? (O/N): ");
        scanf(" %c", &continuer);
    }
    return 0;
}
