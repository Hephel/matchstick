/*
** EPITECH PROJECT, 2020
** d_i_flag.c
** File description:
** d_i_flag of my_printf
*/

void c_flag(char c);

void d_i_flag(int nb)
{
    int m = 0;

    if (nb < 0) {
        c_flag('-');
        nb = nb * -1;
    }
    if (nb < 10)
        c_flag(nb + 48);
    else {
        d_i_flag(nb / 10);
        m = nb % 10;
        c_flag(m + 48);
    }
}