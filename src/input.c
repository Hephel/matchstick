/*
** EPITECH PROJECT, 2021
** matchstick
** File description:
** input
*/

#include <stdlib.h>
#include <stdio.h>
#include "matchstick.h"

static char *take_input(char *to_display)
{
    char *lineptr = NULL;
    size_t n = 0;

    my_printf(to_display);
    if (getline(&lineptr, &n, stdin) == -1) {
        my_printf("\n");
        return (NULL);
    }
    return (lineptr);
}

static int player_input_matches(char **arr, int *input, s_args args)
{
    char *matches;
    int check = 0;

    matches = take_input("Matches : ");
    if (matches == NULL)
        return (-1);
    if (check_input(matches) == 0)
        check = 1;
    if (check == 1)
        check = check_matches(matches, arr, input, args);
    if (check == 2) {
        input[1] = my_getnbr(matches);
        return (3);
    }
}

int player_input_line(char **arr, int *input, s_args args)
{
    char *line;
    int check = 0;

    my_printf("Your turn :\n");
    while (1) {
        line = take_input("Line : ");
        if (line == NULL)
            return (-1);
        if (check_input(line) == 0)
            check = 1;
        if (check == 1)
            check = check_line(line, arr, args.len);
        if (check == 2) {
            input[0] = my_getnbr(line);
            check = player_input_matches(arr, input, args);
        }
        if (check == 3)
            break;
    }
    return (0);
}