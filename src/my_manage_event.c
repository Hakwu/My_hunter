/*
** EPITECH PROJECT, 2019
** my_manage_event.c
** File description:
** managing the events on the game
*/

#include "../include/my.h"

void my_manage_event(event_s *event, cursor_s *cursor,
text_s *text,  window_s *window)
{
    my_mouse_button(event, cursor, window);
    if (event->event.type == sfEvtMouseButtonPressed) {
        cursor->x = event->event.mouseButton.x;
        cursor->y = event->event.mouseButton.y;
        if (cursor->x >= window->vec.x - 55 && cursor->x <= window->vec.x + 55
            && cursor->y >= window->vec.y - 55
            && cursor->y <= window->vec.y + 55) {
            window->vec.x = 0;
            window->vec.y = rand() % 500;
            window->scorecount = window->scorecount + 1;
            sfText_setString(text->score, my_itoa(window->scorecount));
        }
        else
            window->countlife = window->countlife - 1;
    }
    if (event->event.type == sfEvtClosed) {
        sfRenderWindow_close(window->window);
    }
}
