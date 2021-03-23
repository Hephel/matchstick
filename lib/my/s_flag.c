/*
** EPITECH PROJECT, 2020
** s_flag.c
** File description:
** s flag of my_printf function
*/

void c_flag(char c);

int s_flag(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        c_flag(str[i]);
        i++;
    }
    return (0);
}
