/*
** EPITECH PROJECT, 2020
** my_getnbr.c
** File description:
** get nbr
*/

int getnbr_two(char const *str, int neg)
{
    int i = 0;
    long res = 0;

    while (str[i] != '\0') {
        if (res > 2147483647 || res < -2147483647) {
            return (0);
        }
        if ((str[i] >= '0') && (str[i] <= '9')) {
            res = res * 10 + (str[i] - 48);
        }
        else if (str[i] == '-' || str[i] == '+') {
        }
        else {
            return (res * neg);
        }
        i = i + 1;
    }
    return (res * neg);
}

int my_getnbr(char const *str)
{
    int i = 0;
    int neg = 1;
    long res = 0;

    while (str[i] == '-' || str[i] == '+') {
        if (str[i] == '-')
            neg = neg * (-1);
        i = i + 1;
    }
    res = getnbr_two(str, neg);
    return (res);
}
