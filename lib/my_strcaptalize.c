/*
** EPITECH PROJECT, 2022
** MY_STRCAPITALIZE
** File description:
** 21
*/

int minus(char c)
{
    if (c >= 'a' && c <= 'z') {
        return (1);
    }
    return (0);
}

int alpha(char c)
{
    if (c >= 'A' && c <= 'Z'){
        return (1);
    }
    return (0);
}

int is_a_letter(char c)
{
    int maj = alpha(c);
    int min = minus(c);

    if (maj == 0 && min == 0) {
        return (1);
    }
    return (0);
}

void change_maj(char *str, int i)
{
    while (str[i] != '\0') {
        if (is_a_letter(str[i - 1]) == 1 && minus(str[i]) == 1) {
            str[i] = str[i] - 32;
            i += 1;
        }
        if (alpha(str[i - 1]) == 1 && alpha(str[i]) == 1) {
            str[i] = str[i] + 32;
            i += 1;
        }
        if (minus(str[i - 1]) == 1 && alpha(str[i]) == 1) {
            str[i] = str[i] + 32;
            i += 1;
        }
        if (minus(str[i - 1]) == 1 && alpha(str[i]) == 1) {
            str[i] = str[i] + 32;
            i += 1;
        }
        i += 1;
    }
}

char *my_strcapitalize(char *str)
{
    int i = 1;

    if (str[0] >= 'a' && str[0] <= 'z') {
        str[0] = str[0] - 32;
    }
    change_maj(str, i);
    return (str);
}
