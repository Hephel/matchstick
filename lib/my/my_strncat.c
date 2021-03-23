/*
** EPITECH PROJECT, 2020
** my_strncat.c
** File description:
** str n cat
*/

char *my_strncat(char *dest, char const *src, int nb)
{
    int n = 0;
    int i = 0;

    while (dest[n] != '\0') {
        n++;
    }
    while (src[i] != src[nb]) {
        dest[n + i] = src[i];
        i++;
    }
    return (dest);
}
