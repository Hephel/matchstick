/*
** EPITECH PROJECT, 2021
** B-CPE-200-PAR-2-1-matchstick-francois-louis.gourio
** File description:
** end
*/

#include "matchstick.h"

static int ret_pipe_value(char c)
{
    if (c == '|')
        return (1);
    return (0);
}

int check_end(char **arr, int len)
{
    int nb_rows = len;
    int nb_cols = 2 * len - 1;
    int ret = 0;

    for (int j = 0; j < nb_rows; j++) {
        for (int i = 0; i < nb_cols; i++)
            ret = ret + ret_pipe_value(arr[j][i]);
    }
    return (ret);
}