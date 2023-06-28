/*
** EPITECH PROJECT, 2022
** MY_STRSTR
** File description:
** 16
*/
#include <stddef.h>
#include <stdio.h>

int my_strlen(char const *str);

int my_strncmp(char const *s1, char const *s2, int n);

char *my_strstr(char *str, char const *to_find)
{
    int i = 0;
    int len = my_strlen(to_find);

    while (str[i] != '\0') {
        if (my_strncmp(str + i, to_find, len) == 0) {
            return (str + i);
        }
        i += 1;
    }
    return (NULL);
}
