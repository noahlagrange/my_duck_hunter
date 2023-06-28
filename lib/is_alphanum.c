/*
** EPITECH PROJECT, 2022
** is_alphanum
** File description:
** pour_world_array
*/

int is_num(char c)
{
    if (c >= '1' && c <= '9') {
        return (1);
    }
}

int is_upper(char c)
{
    if (c >= 'A' && c <= 'Z') {
        return (1);
    }
}

int is_lower(char c)
{
    if (c >= 'a' && c <= 'z') {
        return (1);
    }
}

int my_str_isalphanum(char c)
{
    if ( is_lower(c) == 1 || is_upper(c) == 1 || is_num(c) == 1) {
        return (1);
    } else {
        return (0);
    }
}
