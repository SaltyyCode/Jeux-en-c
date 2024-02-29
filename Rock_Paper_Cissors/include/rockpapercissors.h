#ifndef ROCKPAPERCISSOR
    #define ROCKERPAPERCISSOR

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

extern const char JOUEUR;
extern const char JOUEUR2;
extern const char BOT;
extern char WINNER;

void player_move();
void player_move2();
void reset_board();
void print_board();
void check_win(char WINNER);
void bot_move();
void play_against_human();
void play_against_bot();


#endif /*ROCKEPAPERCISSOR*/
