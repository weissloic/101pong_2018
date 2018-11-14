/*
** EPITECH PROJECT, 2018
** my_strncmp.c
** File description:
** my_strncmp
*/

#include "my.h"

int my_strncmp(char const *s1, char const *s2, int n)
{
    int co = 0;

    while ((s1[co] == s2[co]) && (co < n)) {
        if (s1[co] == s1[n - 1] && s2[co] == s2[n - 1]) {
            return (0);
        }
        co++;
    }
    return (s1[co] < s2[co] ? -1 : 1);
}