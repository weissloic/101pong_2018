/*
** EPITECH PROJECT, 2018
** my_strcapitalize.c
** File description:
** my_strcapitalize
*/

#include "my.h"

int get_caracteres(char carac)
{
    char car[3] = {' ', '+', '-'};

    for (int i = 0; i <= 2; i++) {
        if (carac == car[i])
            return (1);
    }
    return (0);
}

char *my_strcapitalize(char *str)
{
    int j = 0;

    my_strlowcase(str);
    if (str[0] >= 97 && str[0] <= 122) {
        str[0] = str[0] - 32;
    }
    while (str[j] != '\0') {
        if (get_caracteres(str[j]) == 1) {
            if (str[j + 1] >= 97 && str[j + 1] <= 122) {
                str[j + 1] = str[j + 1] - 32;
            }
        }
        j++;
    }
    return (str);
}