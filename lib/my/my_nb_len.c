/*
** EPITECH PROJECT, 2020
** my_nb_len.c
** File description:
** give number lenght
*/

int my_pow(int nb, int p);

int nb_lenght(int nb)
{
    int p = 0;

    while (my_pow(10, p) < nb) {
        p = p + 1;
    }
    return (p);
}