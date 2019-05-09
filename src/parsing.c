/*
** EPITECH PROJECT, 2018
** Need4steak
** File description:
** parsing.c
*/

#include "my.h"

char **divide_output(char *str, char **tab , int i)
{
    int a = 0;
    int i = get_place(str)

    for (int count = 0; count != 32; i += 1) {
        if (str[i] == ':') {
            tab[a][j] = '\0';
            i += 1;
            a += 1;
            j = 0;
            tab[a] = malloc(sizeof(char) * (my_detect_next_sym(str, ':', i) + 1));
        }
        else {
            tab[a][j] = str[i];
            j += 1;
            i += 1;
        }
    }
    tab[a] = NULL;
    return (tab);
}

char **get_output_in_tab(char *str)
{
    int count = count_number_of_sym(str);
    char **tab = NULL;

    if (str == NULL)
        return (NULL);
    tab = malloc(sizeof(char *) * (count + 1));
    if (tab == NULL)
        return (NULL);
    tab = divide_output(str, tab);
    
}