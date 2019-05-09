/*
** EPITECH PROJECT, 2018
** Need4Steak
** File description:
** additionnal_function.c
*/

#include "my.h"
int get_place(char *str, char **tab)
{
    int i = 0;
 
    for (int count = 0; count != 3; i += 1) {
        if (str[i] == ':')
            count += 1;
    }
    i += 1;
    return (i);
}

int count_number_of_sym(char *str)
{
    int i = 0;
    int count = 0;

    if (str == NULL)
        return (84);
    while (str[i] != '\0') {
        if (str[i] == ':')
            count += 1;
        i += 1;
    }
    return (count);
}

int my_detect_next_sym(char *str, char sym, int i)
{
    int ret = 0;

    while (str[i] != ':' && str[i] != '\0') {
        ret += 1;
        i += 1;
    }
    return (ret);
}

int ftoi (float nbr)
{
    return ((int) nbr);
}