/*
** EPITECH PROJECT, 2020
** my_strcat.c
** File description:
** str cat
*/

char *my_strcat(char *dest, char const *src)
{
    int n = 0;
    int i = 0;

    while (dest[n] != '\0') {
        n++;
    }
    while (src[i] != '\0') {
        dest[n + i] = src[i];
        i++;
    }
    return (dest);
}
