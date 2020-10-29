/*
** EPITECH PROJECT, 2019
** my_strdup
** File description:
** is this a standar header ?
*/
#include <stdlib.h>
#include <stdio.h>

int my_strlen(char const *str);

char *my_strcpy(char *dest, char const *src);

char *my_strdup(char const *src)
{
    char *dest;

    dest = malloc(my_strlen(src) + 1);
    my_strcpy(dest, src);
    dest[my_strlen(src)] = '\0';
    return (dest);
}

char *my_strndup(char const *src, int n)
{
    char *dest = malloc(sizeof(char) * n + 1);

    dest[n] = 0;
    for (int i = 0; src[i] && i < n; i += 1)
        dest[i] = src[i];
    return (dest);
}

char **my_tab_dup(char **tab)
{
    char **dest;
    int len = 0;

    for (; tab[len]; len += 1);
    dest = malloc(sizeof(char *) * (len + 1));
    dest[len] = NULL;
    for (int i = 0; tab[i]; i += 1)
        dest[i] = my_strdup(tab[i]);
    return (dest);
}