/*
** EPITECH PROJECT, 2020
** my_printf.c
** File description:
** my print f function
*/

#include "../../include/my.h"
#include <stdarg.h>
#include <stdlib.h>

void my_printf4(char s, int nb)
{
    switch (s) {
        case 'u':
            u_flag(nb);
            break;
        case 'b':
            b_flag(nb);
            break;
        default:
            break;
    }
}

void my_printf3(char s, int nb)
{
    switch (s) {
        case 'x':
            x_flag(nb);
            break;
        case 'X':
            x_maj_flag(nb);
            break;
        case 'o':
            o_flag(nb);
            break;
        default:
            my_printf4(s, nb);
            break;
    }
}

void my_printf2(char s, int nb)
{
    switch (s) {
        case 'i':
            d_i_flag(nb);
            break;
        case 'd':
            d_i_flag(nb);
            break;
        case 'h':
            hd_flag(nb);
            break;
        case 'c':
            c_flag(nb);
            break;
        default:
            my_printf3(s, nb);
            break;
    }
}