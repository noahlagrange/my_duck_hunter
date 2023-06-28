/*
** EPITECH PROJECT, 2022
** MY_SWAP
** File description:
** 4
*/

void my_swap(int *a, int *b)
{
    int tmp = *a;

    *a = *b;
    *b = tmp;
}
