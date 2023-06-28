/*
** EPITECH PROJECT, 2022
** MY_STRNCMP
** File description:
** 18
*/

int my_strncmp(char const *s1, char const *s2, int n)
{
    int i = 0;

    while (i <= n - 1) {
        if (s1[i] == '\0' && s2[i] != '\0') {
            return (-1);
        }
        if (s1[i] != '\0' && s2[i] == '\0') {
            return (1);
        }
        if (s1[i] > s2[i]) {
            return (1);
        }
        if (s1[i] < s2[i]) {
            return (-1);
        }
        i += 1;
    }
    return (0);
}
