/*
** EPITECH PROJECT, 2022
** MY_ISNUM
** File description:
** 23
*/

int my_strlen(char const *str);

int my_str_isnum(char const *str)
{
    int i = 0;
    int len = my_strlen(str);

    if (len == 0) {
        return (1);
    }
    while (str[i] != '\0') {
        if (str[i] < '1' || str[i] > '9') {
            return (0);
        }
        i += 1;
    }
    return (1);
}
