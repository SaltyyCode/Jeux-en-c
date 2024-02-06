#ifndef SNAKE
    #define SNAKE
    #include "include.h"


//STRUCT
typedef struct s_map
{
    int rows;
    int cols;
    char **map;
} t_map;

struct flag_s
{
    char *flag;
    void (*f)(int ac, char **av);
};
//FUNC
char **str_to_wordarray(char *str, char separator)
//SRC
void fill_board();
void print_board();
void my_putchar(char c);
int main(int ac, char **av);
void draw_snake();



static const struct flag_s flags[] = {
    {"-h", &help},
    {"--help", &help},
    {"-f", &map_loader},
    {"--file", &map_loader},
    {"-g", &generator},
    {"--generate", &generator},
};

#endif /*SNAKE*/