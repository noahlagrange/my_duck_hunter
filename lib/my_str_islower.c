/*
** EPITECH PROJECT, 2022
** MY_STRISMOWER
** File description:
** 24
*/

int my_strlen(char const *str);

int my_str_islower(char const *str)
{
    int i = 0;
    int len = my_strlen(str);

    if (len == 0) {
        return (1);
    }
    while (str[i] != '\0') {
        if (str[i] < 'a' || str[i] > 'z') {
            return (0);
        }
        i += 1;
    }
    return (1);
}
