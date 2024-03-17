#include "../include/tictactoe.h"

int my_eval (char board[3][3])
{
    for (int r = 0; r < 3; r++){
        if (board[r][0] == board[r][1] && board[r][1] == board[r][2]){
            if (board[r][0] == BOT)
                return +10;
            else if (board[r][0] == JOUEUR)
                return -10;
        }
    }
    for (int c = 0; c < 3; c++){
        if (board[0][c] == board[1][c] && board[1][c] == board[2][c]){
            if (board[0][c] == BOT)
                return +10;
            else if (board[0][c] == JOUEUR)
                return -10;
        }
    }
    if (board[0][0] == board[1][1] && board[1][1] == board[2][2] || board[0][2] == board[1][1] && board[1][1] == board[2][0]){
        if (board[1][1] == BOT)
            return +10;
        else if (board[1][1] == JOUEUR)
            return -10;
    }
    return 0;
}

int minimax (char board[3][3], int depth, int isMaximinzing)
{
    int score = my_eval(board);

    if (score == 10)
        return score - depth;
    if (score == -10)
        return score + depth;
    if (check_cell() == 0)
        return 0;

    if (isMaximinzing) {
        int best = -1000;
        for (int i = 0; i < 3; i++){
            for (int j = 0; j < 3; j++){
                if (board[i][j] == ' '){
                    board[i][j] = BOT;
                    best = max(best, minimax(board, depth + 1, !isMaximinzing));
                    board[i][j] = ' ';
                }
            }
        }
        return best;
    } else {
        int best = 1000;
        for (int i = 0; i < 3; i++){
            for (int j = 0; j < 3; j++){
                if (board[i][j] == ' '){
                    board[i][j] = JOUEUR;
                    best = min(best, minimax(board, depth + 1, !isMaximinzing));
                    board[i][j] = ' ';
                }
            }
        }
        return best;
    }
}

void best_move()
{
    int bestEval = -1000;
    int bestMoveR = -1;
    int bestMoveC = -1;

    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            if (board[i][j] == ' ') {
                board[i][j] = BOT;
                int moveVal = minimax(board, 0, 0);
                board[i][j] = ' ';
                if (moveVal > bestEval) {
                    bestMoveR = i;
                    bestMoveC = j;
                    bestEval = moveVal;
                }
            }
        }
    }
    board[bestMoveR][bestMoveC] = BOT;
}

