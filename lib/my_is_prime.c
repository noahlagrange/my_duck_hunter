/*
** EPITECH PROJECT, 2022
** MY_IS_PRIME
** File description:
** task06
*/

int my_is_prime(int nb)
{
    int i = 2;

    if (nb <= 1) {
        return (0);
    }
    if (nb == 2) {
        return (1);
    }
    if (nb % 2 == 0) {
        return (0);
    }
    while (i < nb) {
        if (nb % i == 0) {
            return (0);
        }
        i += 1;
    }
    return (1);
}
