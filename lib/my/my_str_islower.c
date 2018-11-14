/*
** EPITECH PROJECT, 2018
** my_str_islower.c
** File description:
** my_str_islower
*/

#include "my.h"

int my_str_islower(char const *str)
{
    int co = 0;

    while (str[co] != '\0') {
        if (str[co] >= 'a' && str[co] <= 'z') {
            co++;
        } else {
            return (0);
        }
    }
    return (1);
}