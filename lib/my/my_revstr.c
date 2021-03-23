/*
** EPITECH PROJECT, 2020
** my_revstr.c
** File description:
** task03
*/

#include <stdlib.h>

int  my_strlen(char  const *str);

char *my_revstr(char *str)
{
    char *dest = malloc(sizeof(char) * my_strlen(str));
    int i = 0;
    int j = 0;

    while (str [i] != '\0') {
        dest[i] = str[i];
        i = i + 1;
    }
    i =  i - 1;
    while (i != -1) {
        str[i] = dest [j];
        i = i - 1;
        j = j + 1;
    }
    return (str);
}
