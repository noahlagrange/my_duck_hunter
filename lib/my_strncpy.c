/*
** EPITECH PROJECT, 2022
** MY_STRNCPY
** File description:
** TASK02
*/

char *my_strncpy(char *dest, char const *src, int n)
{
    int i = 0;

    while (i != n) {
        if (src[i] == '\0') {
            dest[i] = src[i];
            return (dest);
        }
        dest[i] = src[i];
        i += 1;
    }
    return (dest);
}
