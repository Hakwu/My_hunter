/*
** EPITECH PROJECT, 2019
** my_move_rect
** File description:
** move the rect
*/

#include "../include/my.h"

void move_rect(sfIntRect *rect, int offset, int max_value)
{
    rect->left = rect->left + offset;
    if (rect->left == max_value)
        rect->left = 0;
}
