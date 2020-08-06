/*
** EPITECH PROJECT, 2019
** my_set_text.c
** File description:
** set the text in the game
*/

#include "../include/my.h"

void my_set_text_pimp(text_s *text, window_s *window)
{
    sfText_setString(text->text, "Score : ");
    sfText_setPosition(text->score, window->scorenbposition);
    sfText_setPosition(text->text, window->scoreposition);
    sfText_setColor(text->text, sfBlack);
    sfText_setColor(text->score, sfBlack);
    sfText_setFont(text->text, text->font);
    sfText_setFont(text->score, text->font);
    sfText_setCharacterSize(text->text, 30);
    sfText_setCharacterSize(text->score, 30);
}

void my_set_text(text_s *text, window_s *window)
{
    window->rect.left = 0;
    window->rect.top = 0;
    window->rect.width = 110;
    window->rect.height = 110;
    window->max_value = 330;
    window->offset = 110;
    window->vec.x = 0.0;
    window->vec.y = 0.0;
    window->scoreposition.x = 0;
    window->scoreposition.y = 557;
    window->scorenbposition.x = 120;
    window->scorenbposition.y = 557;
    window->scorecount = 0;
    window->countlife = 3;
    text->font = sfFont_createFromFile("res/font.ttf");
    text->text = sfText_create();
    text->score = sfText_create();
    my_set_text_pimp(text, window);
}
