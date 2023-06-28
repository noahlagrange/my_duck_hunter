/*
** EPITECH PROJECT, 2022
** OCTAL
** File description:
** PRINT OCTAL
*/

#include <stdarg.h>

int my_strlen(char const *str);

int my_putstr(char *str);

char *my_revstr(char *str);

int my_putchar(char c);

int octal_dec(unsigned int nb)
{
    if (nb <= 7)
        my_putchar('0');
    if (nb < 64)
        my_putchar('0');
    if (nb >= 64 && nb <= 71)
        my_putstr("10");
    return 0;
}

int my_put_octal(unsigned int nb)
{
    int index = 0;
    char max[8] = {0};
    char *hex = "01234567";
    int rap = 0;

    octal_dec(nb);
    while (nb >= 9) {
        rap = nb % 8;
        max[index] = hex[rap];
        nb = nb / 8;
        index++;
    }
    max[index] = hex[nb];
    return my_putstr(my_revstr(max));
}

int my_put_octal_va_list(va_list *nb)
{
    return my_put_octal(va_arg(*nb, int));
}
