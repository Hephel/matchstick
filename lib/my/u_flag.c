/*
** EPITECH PROJECT, 2020
** u_flag.c
** File description:
** put an unisgned int (u flag of my_printf function)
*/

#include <stdlib.h>

void c_flag(char c);

void put_u_flag(unsigned nb)
{
    int m = 0;

    if (nb < 10)
        c_flag(nb + 48);
    else {
        put_u_flag(nb / 10);
        m = nb % 10;
        c_flag(m + 48);
    }
}

void u_flag(int nb)
{
    long nb2;

    if (nb < 0) {
        nb2 = 4294967295 + nb;
    }
    put_u_flag(nb);
}