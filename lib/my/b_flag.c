/*
** EPITECH PROJECT, 2020
** b_flag.c
** File description:
** b flag of my_printf function
*/

#include <stdlib.h>

void c_flag(int nb);

int my_pow(int nb, int p);

int nb_lenght(int nb);

void s_flag(char const *str);

void b_flag(int nb)
{
    int p = 0;
    int i = 0;
    char *result;

    result = malloc(sizeof(char) * (nb_lenght(nb) + 1));
    while (my_pow(2, p) < nb) {
        p = p + 1;
    }
    p = p - 1;
    while (p != -1) {
        result[i] = (nb / my_pow(2, p)) + '0';
        nb = nb % my_pow(2, p);
        p = p - 1;
        i = i + 1;
    }
    s_flag(result);
}