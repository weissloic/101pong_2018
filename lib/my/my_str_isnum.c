/*
** EPITECH PROJECT, 2018
** my_str_isnum.c
** File description:
** my_str_isnum
*/

#include "my.h"

int my_str_isnum(char const *str)
{
    int co = 0;

    while (str[co] != '\0') {
        if (str[co] >= '0' && str[co] <= '9') {
            co++;
        } else {
            return (0);
        }
    }
    return (1);
}