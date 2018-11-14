/*
** EPITECH PROJECT, 2018
** my_strncpy.c
** File description:
** my_strncpy
*/

#include "my.h"

char *my_strncpy(char *dest, char const *src, int n)
{
    int co = 0;

    while (src[co] != '\0' && co < n) {
        dest[co] = src[co];
        co++;
    }
    while (co < n) {
        dest[co] = '\0';
        co++;
    }
    return (dest);
}