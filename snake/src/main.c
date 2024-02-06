#include "../include/snake.h"

int main(int ac, char **av)
{
    if (ac == 1) {
        write(2, "Error: no argument\n", 19);
        return (84);
    }
    for (int i = 0; i < 6; i++) {
        if (strcmp(av[1], flags[i].flag) == 0) {
            flags[i].f(ac, av);
            return (0);
        }
    }
    write(2, "Error: invalid argument\n", 24);
    return (84);
}