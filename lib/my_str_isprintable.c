/*
** EPITECH PROJECT, 2022
** MY_STR_ISPRINTABLE
** File description:
** 16
*/

int my_strlen(char const *str);

int my_str_isprintable(char const *str)
{
    int i = 0;
    int len = my_strlen(str);

    if (len == 0) {
        return (1);
    }
    while (str[i] != '\0') {
        if (str[i] < 32 || str[i] > 127) {
            return (0);
        }
        i += 1;
    }
    return (1);
}
