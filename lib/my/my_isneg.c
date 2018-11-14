/*
** EPITECH PROJECT, 2018
** my_isneg
** File description:
** my_isneg
*/
#include "my.h"

int my_isneg(int n)
{
    if (n >= 0)
    {
        my_putchar('P');
        return (1);
    } else {
        my_putchar('N');
        return (1);
    }
    return (0);
}