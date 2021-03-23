/*
** EPITECH PROJECT, 2020
** o_flag.c
** File description:
** o flag of my_printf function
*/

void d_i_flag(int nb);

int my_pow(int nb, int p);

void o_flag(int nb)
{
    int res = 0;
    int p = 0;

    while (my_pow(8, p) < nb) {
        p = p + 1;
    }
    p = p - 1;
    while (p != -1) {
        res = res * 10 + nb / my_pow(8, p);
        nb = nb % my_pow(8, p);
        p = p - 1;
    }
    d_i_flag(res);
}