/*
** EPITECH PROJECT, 2022
** MY_STRCPY
** File description:
** TASK01
*/

char *my_strcpy(char *dest, char const *src)
{
    int i = 0;

    while (src[i] != '\0') {
        dest[i] = src[i];
        i += 1;
    }
    dest[i] = src[i];
    return (dest);
}
