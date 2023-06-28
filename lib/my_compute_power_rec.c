/*
** EPITECH PROJECT, 2022
** MY_COMPUR_POWER_REC
** File description:
** task04
*/

int my_compute_power_rec(int nb, int power)
{
    if (power > 12) {
        return (0);
    }
    if (power == 0) {
        return (1);
    } else if (power < 0) {
        return (0);
    }
    return (nb * my_compute_power_rec(nb, power - 1));
}
