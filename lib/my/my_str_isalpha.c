/*
** EPITECH PROJECT, 2018
** my_str_isalpha.c
** File description:
** my_str_isalpha
*/

#include "my.h"

int my_str_isalpha(char const *str)
{
    int co = 0;

    while (str[co] != '\0') {
        if (str[co] >= 'a' && str[co] <= 'z') {
            co++;
        } else if (str[co] >= 'A' && str[co] <= 'Z') {
            co++;
        } else {
            return (0);
        }
    }
    return (1);
}