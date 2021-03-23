/*
** EPITECH PROJECT, 2021
** matchstick
** File description:
** input
*/

#include <stdlib.h>
#include <stdio.h>
#include "matchstick.h"

char *take_input(char *to_display)
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
 
int check_pos(int *input, char **arr, int len)
{
    int nb_rows = len + 2;
    int nb_cols = (1 + 2 * len);
    int nb = 0;

    //my_printf("%d\n", input[0]);
    //for (int i = 0; arr[input[0]][i] != '\0'; i++) {
    //    if (arr[input[0]][i] == '|')
    //        nb++;
    //}
    //if (nb != input[1]) {
    //    my_printf("This line is empty !\n");
    //    return (1);
    //}
    return (0);
}

int check_input(char *str)
{
    for (int i = 0; str[i] != '\0'; i++) {
        if ((str[i] < '0' || str[i] > '9') && str[i] != '\n') {
            return (1);
        }
    }
    return (0);
}

int input_user(char **arr, int *input, int len)
{
    char *line;
    char *matches;

    my_printf("Your turn :\n");
    line = take_input("Line : ");
    if (line == NULL)
        return (1);
    while (check_input(line) == 1 || check_pos(input, arr, len) == 1) {
        line = take_input("Line : ");
        if (line == NULL)
            return (0);
    }
    matches = take_input("Matches : ");
    while (check_input(matches) == 1 || check_pos(input, arr, len) == 1) {
        matches = take_input("Matches : ");
        if (line == NULL)
            return (0);
    }
    input[0] = my_getnbr(line);
    input[1] = my_getnbr(matches);
    return (0);
}