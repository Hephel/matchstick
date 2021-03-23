/*
** EPITECH PROJECT, 2020
** my_put_nbr.c
** File description:
** put nbr
*/

void my_putchar(char c);

int my_put_nbr(int nb)
{
    int m = 0;

    if (nb < 0) {
        my_putchar('-');
        nb = nb * -1;
    }
    if (nb < 10)
        my_putchar(nb + 48);
    else {
        my_put_nbr(nb / 10);
        m = nb % 10;
        my_putchar(m + 48);
    }
}
