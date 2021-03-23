/*
** EPITECH PROJECT, 2020
** my_strstr
** File description:
** task05
*/

char *my_strstr(char *str, char const *to_find)
{
    int k = 0;
    int l = 0;

    while (str[k] != '\0') {
        while (to_find[l] == str[k]) {
            k++;
            l++;
            if (to_find[l] == '\0') {
                k = k - l;
                return (&str[k]);
            }
        }
        k++;
    }
    return (0);
}
