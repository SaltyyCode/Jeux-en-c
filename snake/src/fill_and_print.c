#include "../include/snake.h"

#define cols 10
#define rows 10

char board [rows * cols];

void fill_board()
{
    int x;
    int y;

    for(y = 0; y<rows; y++ ){
        for(x = 0; x < cols; x++){
            if(x == 0 || y == 0 || x == cols -1 || y == rows -1){
                board[y * cols + x] = '#';
            }else {
                board[y * cols + x] = ' ';
            }
        }
    }
}

void print_board()
{
    int x;
    int y;

    for(y = 0; y < rows; y++ ){
        for(x = 0; x < cols; x++){
            my_putchar(board[y*cols + x]);
        }
        my_putchar('\n');    
    }
}
