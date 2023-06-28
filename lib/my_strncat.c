/*
** EPITECH PROJECT, 2022
** MY_STRNCAT
** File description:
** task03
*/

int my_strlen(char const *str);

char *my_strncat(char *dest, char const *src, int nb)
{
    int len = my_strlen(dest);
    int i = 0;

    while (i < nb && src[i] != '\0') {
        dest[len +i] = src[i];
        i += 1;
    }
    dest[len + i] = '\0';
    return (dest);
}
