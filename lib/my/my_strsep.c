/*
** EPITECH PROJECT, 2020
** CPE_corewar_2019
** File description:
** my_strsep
*/

int my_strlen(char const *);

char *my_strndup(char const *src, int n);

int is_delim(char c, char *delim)
{
    for (int i = 0; delim[i]; i += 1)
        if (c == delim[i])
            return (1);
    return (0);
}

char *my_strsep(char *string, char *delim)
{
    int idx = 0;
    int i = 0;

    if (idx >= my_strlen(string) - 1)
        return ((void *) 0);
    if (idx != 0)
        idx++;
    while (string[idx] && is_delim(string[idx], delim))
        idx += 1;
    i = idx;
    while (string[i] && !is_delim(string[i], delim))
        i += 1;
    i ^= idx;
    idx ^= i;
    i ^= idx;
    return (my_strndup(string + i, idx - i));
}