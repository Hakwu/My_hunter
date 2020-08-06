/*
** EPITECH PROJECT, 2019
** my_draw_window
** File description:
** draw the window with everything
*/

#include "../include/my.h"

void my_draw_window(window_s *window, text_s *text)
{
    sfRenderWindow_clear(window->window, sfBlack);
    sfRenderWindow_setMouseCursorVisible(window->window, sfFalse);
    sfSprite_setTextureRect(window->sprite, window->rect);
    sfRenderWindow_drawSprite(window->window, window->spriteback, NULL);
    sfRenderWindow_drawSprite(window->window, window->sprite, NULL);
    sfRenderWindow_drawSprite(window->window, window->spritesight, NULL);
    sfRenderWindow_drawText(window->window, text->score, NULL);
    if (window->countlife <= 0)
        sfRenderWindow_drawSprite(window->window, window->spriteover, NULL);
    sfRenderWindow_drawText(window->window, text->text, NULL);
    sfRenderWindow_display(window->window);
}
