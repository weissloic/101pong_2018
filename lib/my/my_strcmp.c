/*
** EPITECH PROJECT, 2018
** my_strcmp.c
** File description:
** my_strcmp
*/

#include "my.h"

int my_strcmp(char const *s1, char const *s2)
{
    int co = 0;

    while (s1[co] == s2[co]) {
        if (s1[co] == '\0' && s2[co] == '\0') {
            return (0);
        }
        co++;
    }
    return (s1[co] < s2[co] ? -1 : 1);
}