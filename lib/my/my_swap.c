/*
** EPITECH PROJECT, 2018
** my_swap.c
** File description:
** my_swap
*/

#include "my.h"

void my_swap(int *a, int *b)
{
    int tmp;

    tmp = *a;
    *a = *b;
    *b = tmp;
}