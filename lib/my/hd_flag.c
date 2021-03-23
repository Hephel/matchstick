/*
** EPITECH PROJECT, 2020
** hd_flag.c
** File description:
** hd_flag of my_printf
*/

void c_flag(char c);

int hd_flag(short int nb)
{
    short int m = 0;

    if (nb < 0) {
        c_flag('-');
        nb = nb * -1;
    }
    if (nb < 10)
        c_flag(nb + 48);
    else {
        hd_flag(nb / 10);
        m = nb % 10;
        c_flag(m + 48);
    }
}