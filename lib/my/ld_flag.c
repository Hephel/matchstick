/*
** EPITECH PROJECT, 2020
** ld_flag.c
** File description:
** ld_flag of my_printf
*/

void c_flag(char c);

void ld_flag(long nb)
{
    long m = 0;

    if (nb < 0) {
        c_flag('-');
        nb = nb * -1;
    }
    if (nb < 10)
        c_flag(nb + 48);
    else {
        ld_flag(nb / 10);
        m = nb % 10;
        c_flag(m + 48);
    }
}