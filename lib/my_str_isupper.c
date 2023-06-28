/*
** EPITECH PROJECT, 2022
** MY_STR_ISUPPER
** File description:
** 25
*/

int my_strlen(char const *str);

int my_str_isupper(char const *str)
{
    int i = 0;
    int len = my_strlen(str);

    if (len == 0) {
        return (1);
    }
    while (str[i] != '\0') {
        if (str[i] < 'A' || str[i] > 'Z') {
            return (0);
        }
        i += 1;
    }
    return (1);
}
