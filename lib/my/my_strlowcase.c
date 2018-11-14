/*
** EPITECH PROJECT, 2018
** my_strlowcase.c
** File description:
** my_strlowcase
*/

#include "my.h"

char *my_strlowcase(char *str)
{
    int co = 0;

    while (str[co] != '\0') {
        if (str[co] >= 65 && str[co] <= 90) {
            str[co] = str[co] + 32;
        }
        co++;
    }
    return (str);
}