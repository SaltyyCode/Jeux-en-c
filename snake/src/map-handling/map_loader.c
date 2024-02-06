/*
** EPITECH PROJECT, 2024
** Jeux-en-c
** File description:
** map_loader.c
** Author:
** ludeciel
*/

#include "../../snake.h"

long int file_size(char *filepath)
{
    struct stat st;

    stat(filepath, &st);
    if (S_ISDIR(st.st_mode))
        return (-1);
    if (st.st_size == 0 || st.st_size == -1)
        return (-1);
    return (st.st_size);
}

void map_loader(char *filepath)
{
    t_map *map = malloc(sizeof(t_map));
    int fd = open(filepath, O_RDONLY);
    off_t size = file_size(filepath);
    char *map_file;

    if (fd == -1 || size == -1) {
        write(2, "Error: file not found or empty\n", 31);
        exit(84);
    }
    map_file = malloc(sizeof(char) * (size + 1));
    if (!map_file) {
        write(2, "Error: malloc failed\n", 21);
        exit(84);
    }
    if (read(fd, map_file, size) == -1) {
        write(2, "Error: read failed\n", 19);
        exit(84);
    }
    map_file[size] = '\0';



}