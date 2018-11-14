/*
** EPITECH PROJECT, 2018
** my_str_isprintable.c
** File description:
** my_str_isprintable
*/

#include "my.h"

int my_str_isprintable(char const *str)
{
    int co = 0;

    if (str[0] == '\0')
        return (1);
    while (str[co] != '\0') {
        if (str[co] <= 33 || str[co] >= 126) {
            return (0);
        }
        co++;
    }
    return (1);
}