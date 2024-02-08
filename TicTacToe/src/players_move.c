#include "../include/tictactoe.h"

void player_move()
{
    int x;
    int y;

   do
   {
     printf("Entrez Ligne (1-3): ");
    scanf("%d", &x);
    x--;
    printf("Entrez Colonne (1-3): ");
    scanf("%d", &y);
    y--;

    if (board[x][y] != ' '){
        printf("Coup invalide");
    } else{
        board[x][y] = JOUEUR;
        break;
    }
   } while (board[x][y] != ' ');
}

void player_move2()
{
    int x;
    int y;

   do
   {
     printf("Entrez Ligne (1-3): ");
    scanf("%d", &x);
    x--;
    printf("Entrez Colonne (1-3): ");
    scanf("%d", &y);
    y--;

    if (board[x][y] != ' '){
        printf("Coup invalide");
    } else{
        board[x][y] = JOUEUR2;
        break;
    }
   } while (board[x][y] != ' ');
}
