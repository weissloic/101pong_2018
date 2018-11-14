/*
** EPITECH PROJECT, 2018
** my_strcat.c
** File description:
** my_strcat
*/

#include "my.h"

char *my_strcat(char *dest, char const *src)
{
    int co = 0;
    int counter = 0;

    while (dest[co] != '\0') {
        co++;
    }
    while (src[counter] != '\0') {
        dest[co + counter] = src[counter];
        counter++;
    }
    dest[co + counter] = '\0';
    return (dest);
}