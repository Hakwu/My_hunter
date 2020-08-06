/*
** EPITECH PROJECT, 2019
** my_move.c
** File description:
** move the sprite
*/

#include "../include/my.h"

void my_move(clock_s *clock, window_s *window)
{
    clock->time = sfClock_getElapsedTime(clock->clock);
    clock->seconds = clock->time.microseconds / 1000000.0;
    if (clock->seconds > 0.1) {
        move_rect(&window->rect, window->offset, window->max_value);
        window->vec.x = window->vec.x + 17;
        sfClock_restart(clock->clock);
        sfSprite_setPosition(window->sprite, window->vec);
        sfClock_restart(clock->clock);
        if (window->vec.x >= 800) {
            window->countlife = window->countlife - 1;
            window->vec.x = 0;
        }
    }
}
