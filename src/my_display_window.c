/*
** EPITECH PROJECT, 2019
** my_display_window
** File description:
** displaying the window
*/

#include "../include/my.h"

int my_display_window(window_s *window, clock_s *clock)
{
    window->mode.width = 800;
    window->mode.height = 600;
    window->mode.bitsPerPixel = 32;
    window->resizeduck.x = 0.6;
    window->resizeduck.y = 0.6;
    clock->clock = sfClock_create();
    char const name[9] = "My_hunter";
    window->window = sfRenderWindow_create(window->mode, name, 2 | 4, NULL);
    if (!window->window)
        return (84);
    window->textguns = sfTexture_createFromFile("res/gun.png", NULL);
    window->sight = sfTexture_createFromFile("res/sight.png", NULL);
    window->background = sfTexture_createFromFile("res/background.png", NULL);
    window->spriteback = sfSprite_create();
    window->gameover = sfTexture_createFromFile("res/GAMEOVER.png", NULL);
    window->texture = sfTexture_createFromFile("res/sprite.png", NULL);
    window->sprite = sfSprite_create();
    window->spriteover = sfSprite_create();
    window->spritesight = sfSprite_create();
}
