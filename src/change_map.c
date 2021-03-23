/*
** EPITECH PROJECT, 2021
** matchstick
** File description:
** change_map
*/

#include "matchstick.h"

void change_map(char **arr, int *input, int len)
{
    int nb_rows = len + 2;
    int nb_cols = (1 + 2 * len);
    int i = 0;
    int a = 0;

    for (i; arr[input[0]][i] != '\0'; i++) {
        if (arr[input[0]][i] == '|')
            a = 1;
        if (a == 1 && arr[input[0]][i] == ' ')
            break;
        if (a == 1 && arr[input[0]][i] == '*')
            break;
    }
    for (int k = i - input[1]; k < i; k++)
        arr[input[0]][k] = ' ';
}