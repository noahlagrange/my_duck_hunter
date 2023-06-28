/*
** EPITECH PROJECT, 2022
** MY_SORT_INT ARRAY
** File description:
** 8
*/
#include <stdio.h>

int sorted(int *tab, int size)
{
    int i = 0;

    while (i + 1 <= size) {
        if (tab[i] > tab[i + 1]) {
            return (1);
        }
        i += 1;
    }
    return (0);
}

void  my_sort_int_array(int *tab, int size)
{
    int j = 1;
    int i = 0;
    int rap;
    int is_sort = sorted(tab, size);

    while (is_sort != 0) {
        if (tab[i] > tab[j]) {
            rap = tab[j];
            tab[j] = tab[i];
            tab[i] = rap;
        }
        is_sort = sorted(tab, size);
        j++;
        i++;
        if (j > size) {
            j = 1;
            i = 0;
        }
    }
}
