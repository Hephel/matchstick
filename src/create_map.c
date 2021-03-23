/*
** EPITECH PROJECT, 2021
** matchstick
** File description:
** create_map
*/

#include <stdlib.h>
#include "my.h"

char **mem_alloc_2d_array(int nb_rows, int nb_cols)
{
    char **arr = malloc(sizeof(char *) * (nb_rows + 1));

    for (int i = 0; i < nb_rows; i++) {
        arr[i] = malloc(sizeof(char) * (nb_cols + 1));
    }
    return (arr);
}

void put_pipes(char **arr, int len)
{
    int nb_rows = len + 2;
    int nb_cols = (1 + 2 * len);
    int k = 0;

    while (k < len) {
        for (int i = 1 + k; i < nb_cols - 1 - k; i++) {
            arr[nb_rows - 2 - k][i] = '|';
        }
        k++;
    }
}

char **create_map(int len)
{
    int nb_rows = len + 2;
    int nb_cols = (1 + 2 * len);
    char **arr = mem_alloc_2d_array(nb_rows, nb_cols);

    for (int j = 0; j < nb_rows; j++) {
        for (int i = 0; i < nb_cols; i++)
            arr[j][i] = ' ';
    }
    for (int i = 0; i < nb_cols; i++)
        arr[0][i] = '*';
    for (int j = 0; j < nb_rows; j++)
        arr[j][0] = '*';
    for (int j = 0; j < nb_rows; j++)
        arr[j][nb_cols - 1] = '*';
    for (int i = 0; i < nb_cols; i++)
        arr[nb_rows - 1][i] = '*';
    put_pipes(arr, len);
    return (arr);
}