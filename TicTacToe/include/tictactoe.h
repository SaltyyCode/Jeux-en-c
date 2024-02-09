#ifndef TICTACTOE
    #define TICTACTOE

#include <stdio.h>
#include <stdlib.h>

extern char board[3][3];
extern const char JOUEUR;
extern const char JOUEUR2;
extern const char BOT;
extern char WINNER;

void player_move();
void player_move2();
void reset_board();
void print_board();
int check_cell();
int check_move();
void check_win(char WINNER);
void bot_move();


#endif /*TICTACTOE*/