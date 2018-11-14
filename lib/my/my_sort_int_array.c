/*
** EPITECH PROJECT, 2018
** my_sort_int_array.c
** File description:
** my_sort_int_array
*/

#include "my.h"

void my_sort_int_array(int *array, int size)
{
    unsigned int co = 0;
    int tmp = 0;

    while (co < size - 1) {
        if (array[co] > array[co + 1]) {
            my_swap(&array[co], &array[co + 1]);
            co = 0;
        }
        co++;
    }
}