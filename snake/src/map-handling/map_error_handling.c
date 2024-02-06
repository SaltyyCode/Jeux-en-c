/*
** EPITECH PROJECT, 2024
** Jeux-en-c
** File description:
** map_error_handling.c
** Author:
** ludeciel
*/

#include "../../include/snake.h"

void map_error_handling(char *map_file)
{
    for (int i = 0; map_file[i] != '\0'; i++) {
        if (map_file[i] != '#' && map_file[i] != ' ' && map_file[i] != '\n') {
            write(2, "Error: invalid character in map\n", 33);
            exit(84);
        }
        if (map_file[i] == '\n' && map_file[i + 1] == '\n') {
            write(2, "Error: invalid map\n", 19);
            exit(84);
        }
        if (map_file[i] == '\n' && map_file[i + 1] == '\0') {
            write(2, "Error: invalid map\n", 19);
            exit(84);
        }
    }
}
