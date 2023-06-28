/*
** EPITECH PROJECT, 2022
** MY_COMPUTE_SQUARE_ROOT
** File description:
** TASK05
*/

int my_compute_square_root(int nb)
{
    int root = 0;

    if (nb <= 0) {
        return (0);
    }
    while (root * root != nb) {
        root += 1;
        if (root > nb) {
            return (0);
        }
    }
    return (root);
}
