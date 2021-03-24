/*
** EPITECH PROJECT, 2021
** B-CPE-200-PAR-2-1-matchstick-francois-louis.gourio
** File description:
** rand_ia
*/

#include "matchstick.h"

void ai_input(char **arr, int *input, s_args args)
{
    int nb_rows = args.len;
    int nb_cols = args.len * 2 - 1;
    int j = 0;
    int i = 0;

    my_printf("AI's turn...\n");
    while (arr[j][i] != '|') {
        if (i == nb_cols) {
            i = 0;
            j++;
        }
        i++;
    }
    my_printf("AI removed 1 match(es) from line %d\n", j + 1);
    input[0] = j + 1;
    input[1] = 1;
}