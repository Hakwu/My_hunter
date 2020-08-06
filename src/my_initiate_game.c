/*
** EPITECH PROJECT, 2019
** my_play.c
** File description:
** play the game.c
*/

#include "../include/my.h"

void my_initiate_game(window_s *window, text_s *text,
cursor_s *cursor, clock_s *clock)
{
    window->music = sfMusic_createFromFile("res/Ship.ogg");
    sfMusic_play(window->music);
    my_display_window(window, clock);
    my_set_text(text, window);
    my_set_texture(window, cursor);
    sfMusic_setLoop(window->music, sfTrue);
}
