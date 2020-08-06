/*
** EPITECH PROJECT, 2019
** mousebutton.c
** File description:
** manage the mousebutton
*/

#include "../include/my.h"

void my_mouse_button(event_s *event, cursor_s *cursor, window_s *window)
{
    if (event->event.type == sfEvtMouseMoved) {
        cursor->sightx = event->event.mouseMove.x - 25;
        cursor->sighty = event->event.mouseMove.y - 25;
        sfVector2f position = {cursor->sightx, cursor->sighty};
        sfSprite_setPosition(window->spritesight, position);
    }
}
