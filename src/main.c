/*
** EPITECH PROJECT, 2018
** Need4Steak
** File description:
** main.c
*/

int analyse_output(data_t data)
{
    char *output = get_next_line(0);

    if (ouput == NULL)
        return (84);
    data.tab = get_output_in_tab(output);
}

int give_order(data_t data, char *str, float argument, char *type_arg)
{
    if (type_arg == NULL)
        printf("%s\n", str);
    else if (strcmp(type_arg, "float") == 0)
        printf("%s:%f", str, argument);
    else
        printf("%s:%d", str, ftoi(argument));
    if (analyse_output(data) == 84)
        return (84);
    return (0);
}

data_t init_data(void)
{
    data_t data;

    data->car_speed = 0;
    data->car_direction = 0;
    data->wheels_angles = 0;
    data->car_max_speed = 0;
    data->car_min_speed = 0;
    data->info_lidar = 0;
}
