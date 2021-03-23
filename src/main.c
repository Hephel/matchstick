/*
** EPITECH PROJECT, 2020
** main.c
** File description:
** main
*/

#include <stdlib.h>
#include <stdio.h>
#include "matchstick.h"

void display_map(char **arr, int len)
{
    int nb_rows = len + 2;
    int nb_cols = (1 + 2 * len) + 2;

    for (int j = 0; j < nb_rows; j++) {
        for (int i = 0; i < nb_cols; i++)
            my_printf("%c", arr[j][i]);
        my_printf("\n");
    }
}

int matchstick(int len)
{
    char **arr = create_map(len);
    int *input = malloc(sizeof(int) * 2);

    display_map(arr, len);
    while (1) {
        if (input_user(arr, input, len) == 1)
            return (0);
        change_map(arr, input, len);;
        display_map(arr, len);
    }
}

int main(int ac, char **av)
{
    int err = error(ac, av);

    if (err == 1)
        return (1);
    else if (err == 84)
        return (84);
    matchstick(my_getnbr(av[1]));
    return (0);
}
