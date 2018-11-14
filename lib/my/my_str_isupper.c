/*
** EPITECH PROJECT, 2018
** my_str_isupper.c
** File description:
** my_str_isupper
*/

#include "my.h"

int my_str_isupper(char const *str)
{
    int co = 0;

    while (str[co] != '\0') {
        if (str[co] >= 'A' && str[co] <= 'Z') {
            co++;
        } else {
            return (0);
        }
    }
    return (1);
}