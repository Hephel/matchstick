/*
** EPITECH PROJECT, 2021
** matchstick
** File description:
** change_map
*/

#include "matchstick.h"

void change_map(char **arr, int *input, int len)
{
    int nb_rows = len;
    int nb_cols = 2 * len - 1;
    int i = 0;
    int a = 0;

    for (i; arr[input[0] - 1][i] != '\0'; i++) {
        if (arr[input[0] - 1][i] == '|')
            a = 1;
        if (a == 1 && arr[input[0] - 1][i] == ' ')
            break;
    }
    for (int k = i - input[1]; k < i; k++)
        arr[input[0] - 1][k] = ' ';
}