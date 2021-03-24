/*
** EPITECH PROJECT, 2021
** B-CPE-200-PAR-2-1-matchstick-francois-louis.gourio
** File description:
** check_input
*/

#include "matchstick.h"

int check_matches(char *matches, char **arr, int *input, s_args args)
{
    int mat = my_getnbr(matches);
    int nb = 0;

    if (mat == 0) {
        my_printf("Error: you have to remove at least one match\n");
        return (0);
    }
    if (mat > args.max) {
        my_printf("Error: you cannot remove ");
        my_printf("more than %d matches per turn\n", args.max);
        return (0);
    }
    for (int i = 0; arr[input[0] - 1][i] != '\0'; i++) {
        if (arr[input[0] - 1][i] == '|')
            nb++;
    }
    if (nb < mat) {
        my_printf("Error: not enough matches on this line\n");
        return (0);
    }
    return (2);
}
 
int check_line(char *line, char **arr, int len)
{
    int nb_rows = len;
    int nb_cols = (2 * len  - 1);
    int row = my_getnbr(line);
    int nb = 0;

    if (row == 0 || row > nb_rows) {
        my_printf("Error: this line is out of range\n");
        return (0);
    }
    return (2);
}

int check_input(char *str)
{
    for (int i = 0; str[i] != '\0'; i++) {
        if ((str[i] < '0' || str[i] > '9') && str[i] != '\n') {
            my_printf("Error: invalid input (positive number expected)\n");
            return (1);
        }
    }
    return (0);
}