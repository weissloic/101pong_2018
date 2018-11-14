/*
** EPITECH PROJECT, 2018
** my_strstr.c
** File description:
** my_strstr
*/

#include "my.h"

int my_show_word_array(char * const *tab)
{
    int i;
    int tailletab;

    i = 0;
    while (tab[i] != 0) {
        my_putstr(tab[i]);
        my_putchar('\n');
        i++;
    }
}
