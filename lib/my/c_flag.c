/*
** EPITECH PROJECT, 2020
** c_flag.c
** File description:
** c flag of my_printf function
*/

#include <unistd.h>

void c_flag(char c)
{
    write(1, &c, 1);
}

