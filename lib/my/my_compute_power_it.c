/*
** EPITECH PROJECT, 2018
** my_compute_power_it.c
** File description:
** my_compute_power_it
*/
#include "my.h"
#include <limits.h>

int my_compute_power_it(int nb, int p)
{
    int final = 1;

    if (p == 0)
        return (1);
    if (p < 0)
        return (0);
    while (p > 0) {
        if ((INT_MAX / (nb > 0 ? nb : -nb)) > final) {
        final *= nb;
        p--;
        } else {
            return (0);
        }
    }
    return (final);
}