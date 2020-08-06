/*
** EPITECH PROJECT, 2019
** my_set_texture
** File description:
** setting the texture of the game
*/

#include "../include/my.h"

void my_set_texture(window_s *window, cursor_s *cursor)
{
    cursor->resize.x = 0.2;
    cursor->resize.y = 0.2;
    sfSprite_scale(window->spritesight, cursor->resize);
    sfSprite_scale(window->sprite, window->resizeduck);
    sfSprite_setTexture(window->spriteover, window->gameover, sfTrue);
    sfSprite_setTexture(window->spriteback, window->background, sfTrue);
    sfSprite_setTexture(window->sprite, window->texture, sfTrue);
    sfSprite_setTexture(window->spritesight, window->sight, sfTrue);
}
