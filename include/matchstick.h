/*
** EPITECH PROJECT, 2021
** my_lib
** File description:
** header
*/

#ifndef MATCHSTICK_H_
#define MATCHSTICK_H_
#include "my.h"

int error(int ac, char **av);
char **mem_alloc_2d_array(int nb_rows, int nb_cols);
char **create_map(int len);
int input_user(char **arr, int *input, int len);
void change_map(char **arr, int *input, int len);

#endif