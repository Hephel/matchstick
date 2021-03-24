/*
** EPITECH PROJECT, 2021
** my_lib
** File description:
** error
*/

#include "my.h"

void def_funct(void)
{
    my_printf("USAGE\n    ./ \n\n");
    my_printf("DESCRIPTION\n");
    my_printf("\n");
}

int error(int ac, char **av)
{
    if (ac == 2 && av[1][0] == '-' && av[1][1] == 'h' && av[1][2] == '\0') {
        def_funct();
        return (1);
    }
    if (ac != 3)
        return (84);
    for (int i = 0; av[1][i] != '\0'; i++) {
        if (av[1][i] < '0' || av[1][i] > '9')
            return (84);
    }
    for (int i = 0; av[2][i] != '\0'; i++) {
        if (av[2][i] < '0' || av[2][i] > '9')
            return (84);
    }
    return (0);
}