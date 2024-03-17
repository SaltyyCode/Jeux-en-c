#ifndef TICTACTOE
    #define TICTACTOE

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

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
void play_against_human();
void play_against_bot();
int my_eval (char board[3][3]);
int minimax (char board[3][3], int depth, int isMaximinzing);
void best_move();
int max(int a, int b);
int min(int a, int b);


#endif /*TICTACTOE*/