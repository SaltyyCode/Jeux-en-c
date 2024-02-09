#include "../include/tictactoe.h"

char board[3][3];
const char JOUEUR = 'O';
const char JOUEUR2 = 'X';
const char BOT = 'X';
char WINNER = ' ';

int main(int ac, char **av)
{
    char continuer = 'O';

    if (ac == 2 && av[1][0] == '-' && av[1][1] == 'h'){
        printf("Usage : ./TicTacToe\nuse ./TicTacToe IA pour joueur contre l'IA !");
        return 0;
    }
    while (continuer == 'O' || continuer == 'o') {
        reset_board();
        WINNER = ' ';
        if (ac > 1 && (strcmp(av[1], "IA") == 0 || strcmp(av[1], "ia") == 0)){
            play_against_bot();
        }else 
            play_against_human();

        print_board();
        check_win(WINNER);
        printf("\nNouvelle partie? (O/N): ");
        scanf(" %c", &continuer);
    }
    return 0;
}