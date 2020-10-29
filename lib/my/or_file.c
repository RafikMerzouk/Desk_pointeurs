/*
** EPITECH PROJECT, 2020
** desk_pointeurs
** File description:
** or_file.c
*/

#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>

char **my_str_to_word_array(char const *str, char *separator);

char *open_and_read_file(char *filename)
{
    struct stat st;
    char *str = NULL;
    int fd = 0;

    if (stat(filename, &st) == -1 || (fd = open(filename, O_RDONLY)) == -1)
        return NULL;
    str = malloc(sizeof(char) * (st.st_size + 1));
    for (int i = 0; i <= st.st_size; str[i++] = 0);
    if (read(fd, str, st.st_size) == -1)
        return NULL;
    return (str);
}