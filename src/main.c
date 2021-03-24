/*
** EPITECH PROJECT, 2020
** main.c
** File description:
** main
*/

#include <stdlib.h>
#include <stdio.h>
#include "matchstick.h"

static void display_map(char **arr, int len)
{
    int nb_rows = len;
    int nb_cols = (2 * len - 1);

    for (int i = 0; i <= nb_cols + 1; i++)
        my_printf("*");
    my_printf("\n");
    for (int j = 0; j < nb_rows; j++) {
        my_printf("*");
        for (int i = 0; i < nb_cols; i++)
            my_printf("%c", arr[j][i]);
        my_printf("*\n");
    }
    for (int i = 0; i <= nb_cols + 1; i++)
        my_printf("*");
    my_printf("\n");
}

static int matchstick_loop(char **arr, int *input, s_args args)
{
    if (player_input_line(arr, input, args) == -1)
        return (-1);
    my_printf("Player removed %d match(es)", input[1]);
    my_printf("from line %d\n", input[0]);
    change_map(arr, input, args.len);
    display_map(arr, args.len);
    if (check_end(arr, args.len) == 0) {
        my_printf("You lost, too bad...\n");
        return (2);
    }
    my_printf("\n");
    ai_input(arr, input, args);
    change_map(arr, input, args.len);
    display_map(arr, args.len);
    if (check_end(arr, args.len) == 0) {
        my_printf("I lost... snif... but I'll get you next time!!\n");
        return (1);
    }
    my_printf("\n");
    return (0);
}

static int matchstick(int len, int max)
{
    char **arr = create_map(len);
    int *input = malloc(sizeof(int) * 2);
    s_args args;
    int ret = 0;

    args.len = len;
    args.max = max;
    display_map(arr, args.len);
    my_printf("\n");
    while (1) {
        ret = matchstick_loop(arr, input, args);
        if (ret == -1)
            return (-1);
        if (ret == 1)
            return (1);
        if (ret == 2)
            return (2);
    }
    return (0);
}

int main(int ac, char **av)
{
    int err = error(ac, av);
    int ret = 0;

    if (err == 1)
        return (1);
    else if (err == 84)
        return (84);
    ret = matchstick(my_getnbr(av[1]), my_getnbr(av[2]));
    if (ret == 1)
        return (1);
    if (ret == 2)
        return (2);
    return (0);
}
