/*
** EPITECH PROJECT, 2022
** MY.H
** File description:
** task02
*/

#include <stdarg.h>

#ifndef MY_H_

    #define MY_H_

int my_compute_power_rec(int nb, int power);

int my_compute_square_root(int nb);

char *my_strdup(char const *str);

int my_find_prime_sup(int nb);

int my_getnbr(char const *str);

int my_isneg(int n);

int my_is_prime(int nb);

int my_putchar(char c);

int my_put_nbr(int nb);

char *my_revstr(char *str);

int my_showmem(char const *str, int size);

int my_showstr(char const *str);

void  my_sort_int_array(int *tab, int size);

char *my_strcapitalize(char *str);

char *my_strcat(char *dest, char const *src);

int my_strcmp(char const *s1, char const *s2);

char *my_strcpy(char *dest, char const *src);

int my_str_islower(char const *str);

int my_str_isnum(char const *str);

int my_str_isprintable(char const *str);

int my_str_isupper(char const *str);

int my_strlen(char const *str);

char *my_strlowcase(char *str);

char *my_strncat(char *dest, char const *src, int nb);

int my_strncmp(char const *s1, char const *s2, int n);

char *my_strncpy(char *dest, char const *src, int n);

char *my_strstr(char *str, char const *to_find);

char *my_strupcase(char *str);

void my_swap(int *a, int *b);

int my_str_isalpha(char c);

int my_putchar(char c);
int my_putstr(char *str);
int my_putstr_va_list(va_list *str);
int my_put_nbr_va_list(va_list *nb);
int my_getnbr(char const *str);
int my_strlen(char const *str);
char *my_revstr(char *str);
int hexadecimal_low(int nb);
int hexadecimal_up_va_list(va_list *nb);
int hexadecimal_low_va_list(va_list *nb);
int hexadecimal_up(int nb);
int my_put_octal(unsigned int nb);
int my_put_octal_va_list(va_list *nb);
int my_put_decimal(char nb);
int my_put_decimal_va_list(va_list *nb);
int my_put_octal_unprint( int nb);
int my_put_octal_unprint_va_list(va_list *nb);
int hexadecimal_address(int nb);
int address_va_list(va_list *a);
int my_put_float(float nb, int T);
int my_put_float_va_list(va_list *nb ,int t);
char *my_strcpy(char *dest, char const *src);
int my_put_nothing(va_list *list);
int my_put_nbr(int nb);
int my_put_s_esp_va_list(va_list *nb ,int t);

#endif /* MY_H_ */
