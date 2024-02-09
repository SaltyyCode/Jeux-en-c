#include "../include/tictactoe.h"

void player_move()
{
    int x;
    int y; 
    int input;

    do {
        printf("Entrez Ligne (1-3): ");
        input = scanf("%d", &x);
        if(input != 1) {
            while(getchar() != '\n');
            printf("Veuillez entrer un chiffre entre 1 et 3.\n");
            continue;
        }
        x--;
        printf("Entrez Colonne (1-3): ");
        input = scanf("%d", &y);

        if(input != 1 || x < 0 || x > 2 || y < 1 || y > 3) {
            while(getchar() != '\n');
            printf("Veuillez entrer un chiffre entre 1 et 3.\n");
            continue;
        }

        y--;

        if (board[x][y] != ' ') {
            printf("Coup invalide\n");
        } else {
            board[x][y] = JOUEUR;
            break;
        }
    } while (1);
}


void player_move2()
{
    int x;
    int y; 
    int input;

    do {
        printf("Entrez Ligne (1-3): ");
        input = scanf("%d", &x);
        if(input != 1) {
            while(getchar() != '\n');
            printf("Veuillez entrer un chiffre entre 1 et 3.\n");
            continue;
        }
        x--;
        printf("Entrez Colonne (1-3): ");
        input = scanf("%d", &y);

        if(input != 1 || x < 0 || x > 2 || y < 1 || y > 3){
            while(getchar() != '\n');
            printf("Veuillez entrer un chiffre entre 1 et 3.\n");
            continue;
        }
        y--;
        if (board[x][y] != ' '){
            printf("Coup invalide\n");
        } else {
            board[x][y] = JOUEUR2;
            break;
        }
    } while (1);
}