/*
** EPITECH PROJECT, 2020
** desk_pointeurs
** File description:
** bg_strlen.c
*/

int bg_strlen(char const *str)
{
    char const *tmp = str;

    while (*++tmp);
    return tmp - str;
}