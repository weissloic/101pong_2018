/*
** EPITECH PROJECT, 2018
** my_strncat.c
** File description:
** my_strncat
*/

#include "my.h"

char *my_strncat(char *dest, char const *src, int nb)
{
    int co = 0;
    int counter = 0;

    while (dest[co] != '\0') {
        co++;
    }
    while (src[counter] != '\0' && counter < nb) {
        dest[co + counter] = src[counter];
        counter++;
    }
    dest[co + counter] = '\0';
    return (dest);
}