/*
** EPITECH PROJECT, 2020
** my_printf.c
** File description:
** my print f function
*/

#include "../../include/my.h"
#include <stdarg.h>
#include <stdlib.h>

int i_to_pass_ld_hd(char *s, int i);

void my_printf2(char s, int nb);

void my_printf3(char s, int nb);

void my_printf4(char s, int nb);

int i_to_pass_ld_hd(char *s, int i)
{
    if (s[i] == 'h' || s[i] == 'l') {
        if (s[i + 1] == 'd')
            return (1);
    } else
        return (0);
}

void cases_aside_flags(char s)
{
    if (s == '\n')
        c_flag('\n');
    else
        c_flag(s);
}

void main_switch(va_list list, char *s, int i)
{
    switch (s[i]) {
        case 'l':
            ld_flag(va_arg(list, long));
            break;
        case 's':
            s_flag(va_arg(list, char *));
            break;
        case '%':
            c_flag('%');
            break;
        default:
            my_printf2(s[i], va_arg(list, int));
            break;
    }
}

void my_printf(char *s, ...)
{
    int i = 0;
    va_list list;

    va_start(list, s);
    for (i = 0; s[i] != '\0'; i++) {
        switch (s[i]) {
            case '%':
                i = i + 1;
                main_switch(list, s, i);
                i = i + i_to_pass_ld_hd(s, i);
                break;
            default:
                cases_aside_flags(s[i]);
                break;
        }
    }
}
