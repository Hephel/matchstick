/*
** EPITECH PROJECT, 2021
** my_lib
** File description:
** header
*/

#ifndef MATCHSTICK_H_
#define MATCHSTICK_H_
#include "my.h"
#include "struct.h"

int error(int ac, char **av);
char **mem_alloc_2d_array(int nb_rows, int nb_cols);
char **create_map(int len);
int player_input_line(char **arr, int *input, s_args args);
void change_map(char **arr, int *input, int len);
int check_input(char *str);
int check_line(char *line, char **arr, int len);
int check_matches(char *matches, char **arr, int *input, s_args args);
void ai_input(char **arr, int *input, s_args args);
int check_end(char **arr, int len);
void user_win(void);
void ai_win(void);

#endif