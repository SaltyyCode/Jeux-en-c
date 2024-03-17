#include "../include/tictactoe.h"

void play_against_bot()
{
    while (WINNER == ' ' && check_cell() != 0) {
            print_board();
            player_move();
            WINNER = check_move();
            if (WINNER != ' ' || check_cell() == 0)
            break;
            print_board();
            best_move();
            WINNER = check_move();
            if (WINNER != ' ' || check_cell() == 0)
            break;
        }
}

void play_against_human()
{
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
}