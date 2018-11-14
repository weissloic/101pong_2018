/*
** EPITECH PROJECT, 2018
** my_compute_square_root.c
** File description:
** my_compute_square_root
*/
#include "my.h"

int my_compute_square_root(int nb)
{
    int co = 0;

    if (nb == 1)
        return (1);
    if ((nb < 0) || (nb > 2147483647) || (nb == 0))
        return (0);
    while (co < nb) {
        if ((co * co) == nb) {
            return (co);
        }
        co++;
    }
    return (0);
}