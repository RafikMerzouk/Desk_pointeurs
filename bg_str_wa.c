/*
** EPITECH PROJECT, 2020
** desk_pointeurs
** File description:
** bg_str_wa.c
*/

#include "pointeurs.h"

int is_alpha_num(char c, char *delimiter)
{
    if (delimiter == NULL)
        return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')
        || (c >= '0' && c <= '9'));
    for (int i = 0; delimiter[i]; i += 1)
        if (c == delimiter[i] || c == 0)
            return (0);
    return (1);
}

int arg_num(char const *str, char *delimiter)
{
    int arg = 0;

    for (int i = 0; str[i] != '\0'; i += 1) {
        if ((is_alpha_num(str[i], delimiter) && i == 0) ||
        (i > 0 && is_alpha_num(str[i], delimiter)
        && !is_alpha_num(str[i - 1], delimiter)))
            arg += 1;
    }
    return (arg);
}

char **bg_str_wa(char *str, char *delimiter)
{
    char **array = malloc(sizeof(char *) * (arg_num(str, delimiter) + 1));
    int array_index = 0;
    int start_word_index = 0;
    int len = my_strlen(str);

    for (int i = 0; i < arg_num(str, delimiter) + 1; array[i++] = NULL);
    for (int i = 0; i < len; i += 1) {
        if (is_alpha_num(str[i], delimiter) && i < len - 1
        && !is_alpha_num(str[i + 1], delimiter)) {
            array[array_index] = str + start_word_index;
            array_index += 1;
            str[i + 1] = '\0';
        }
        if (is_alpha_num(str[i], delimiter) && i > 0
        && !is_alpha_num(str[i - 1], delimiter)) {
            start_word_index = i - 1;
        }
    }
    return (array);
}