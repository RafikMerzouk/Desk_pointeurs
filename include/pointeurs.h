/*
** EPITECH PROJECT, 2020
** CPE_corewar_2019
** File description:
** pointeurs
*/

#ifndef pointeurs_H_
#define pointeurs_H_

#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "my_printf.h"


char **bg_str_wa(char *str, char *delimiter);
int bg_strlen(char const *str);

#include "my.h"

#endif /* !pointeurs_H_ */