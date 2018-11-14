/*
** EPITECH PROJECT, 2018
** my_compute_power_rec
** File description:
** my_compute_power_rec
*/

#include "my.h"

int my_compute_power_rec(int nb, int p)
{
    int av;
    static int final;

    if (p == 0)
        return (1);
    if (p < 0)
        return (0);
    final = (nb * my_compute_power_rec(nb, p - 1));
    av = (nb * my_compute_power_it(nb, p - 1));
    if (final != av)
        return (0);
    return (final);
}