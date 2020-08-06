/*
** EPITECH PROJECT, 2019
** my_putstr.c
** File description:
** displays one by one the characters
*/

#include <unistd.h>
#include "../include/my.h"

void my_putchar(char c)
{
    write(1, &c, 1);
}

void my_putstr(char *str)
{
    int  i;

    for (i = 0; str[i] != '\0'; i++) {
        my_putchar(str[i]);
    }
}
