/*
** EPITECH PROJECT, 2020
** my_swap.c
** File description:
** task01 of day04
*/

void my_swap(int *a, int *b)
{
    int c = *a;

    *a = *b;
    *b = c;
}
