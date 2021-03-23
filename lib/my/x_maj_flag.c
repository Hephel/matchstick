/*
** EPITECH PROJECT, 2020
** X_flag.c
** File description:
** X flag of my_rpintf function
*/

#include <stdlib.h>

void s_flag(char const *str);

int my_pow(int nb, int p);

int nb_lenght(int nb);

char *hexa_maj_insertion(char *result)
{
    int i = 0;

    while (result[i] != '\0') {
        if (result[i] > '9' && result[i] < 'A' )
            result[i] = result[i] + 7;
        i = i + 1;
    }
    return (result);
}

void x_maj_flag(int nb)
{
    int p = 0;
    int i = 0;
    char *result;

    result = malloc(sizeof(char) * (nb_lenght(nb) + 1));
    while (my_pow(16, p) < nb) {
        p = p + 1;
    }
    p = p - 1;
    while (p != -1) {
        result[i] = (nb / my_pow(16, p)) + '0';
        nb = nb % my_pow(16, p);
        p = p - 1;
        i = i + 1;
    }
    s_flag(hexa_maj_insertion(result));
}