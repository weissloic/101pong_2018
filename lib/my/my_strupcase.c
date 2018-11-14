/*
** EPITECH PROJECT, 2018
** my_strupcase.c
** File description:
** my_strupcase
*/

#include "my.h"

char *my_strupcase(char *str)
{
    int co = 0;

    while (str[co] != '\0') {
        if (str[co] >= 97 && str[co] <= 122) {
            str[co] = str[co] - 32;
        }
        co++;
    }
    return (str);
}