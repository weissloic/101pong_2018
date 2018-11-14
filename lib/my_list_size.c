/*
** EPITECH PROJECT, 2018
** rev
** File description:
** str
*/

#include <include/mylist.h>
#include <stdlib.h>

int my_list_size(linked_list_t const *begin) {
    int taille = 0;
    l = begin;
    linked_list_t l*;

    while(l != NULL) {
        taille++;
        l = l -> next;
    }
    return (taille);
}