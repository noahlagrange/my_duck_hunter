/*
** EPITECH PROJECT, 2022
** MY_STR_ISALPHA
** File description:
** 22
*/

int my_strlen(char const *str);

int is_upc(char c)
{
    if (c >= 'A' && c <= 'Z') {
        return (1);
    }
    return (0);
}

int is_lowc(char c)
{
    if (c >= 'a' && c <= 'z') {
        return (1);
    }
    return (0);
}

int my_str_isalpha(char const *str)
{
    int i = 0;
    int len = my_strlen(str);

    if (len == 0) {
        return (1);
    }
    while (str[i] != '\0') {
        if (is_upc(str[i]) == 0 && is_lowc(str[i]) == 0) {
            return (0);
        }
        i += 1;
    }
    return (1);
}
