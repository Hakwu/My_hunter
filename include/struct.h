/*
** EPITECH PROJECT, 2019
** struct.h
** File description:
** structures for my_hunter
*/

#include <SFML/Graphics.h>
#include <SFML/Audio.h>

typedef struct window_t
{
    sfIntRect rect;
    sfRenderWindow *window;
    sfVideoMode mode;
    sfTexture *background;
    sfTexture *texture;
    sfTexture *gameover;
    sfTexture *textguns;
    sfTexture *sight;
    sfSprite *spriteback;
    sfSprite *sprite;
    sfSprite *spriteover;
    sfSprite *spritesight;
    sfVector2f resizeduck;
    int max_value;
    int offset;
    sfVector2f vec;
    sfVector2f scoreposition;
    sfVector2f scorenbposition;
    int scorecount;
    int countlife;
    sfMusic *music;
}window_s;

typedef struct cursor_t
{
    int x;
    int y;
    int sightx;
    int sighty;
    sfVector2f resize;
    sfVector2f position;
}cursor_s;

typedef struct clock_t
{
    sfClock *clock;
    sfTime time;
    float seconds;
}clock_s;

typedef struct event_t
{
    sfEvent event;
    sfMouseMoveEvent mouseMove;
    sfMouseButtonEvent mouseButton;
}event_s;

typedef struct text_t
{
    sfFont *font;
    sfText *score;
    sfText *text;
}text_s;
