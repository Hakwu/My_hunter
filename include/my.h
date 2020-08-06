/*
** EPITECH PROJECT, 2019
** my.h
** File description:
** contains prototype of all functions in libmy
*/

#include <stdlib.h>
#include <SFML/Graphics.h>
#include <SFML/Audio.h>
#include <stdio.h>
#include "struct.h"

void my_putchar(char);
int my_isneg(int);
int my_put_nbr(int);
void my_swap(int *, int *);
void my_putstr(char *str);
int my_strlen(char const *str);
int my_getnbr(char *str);
char *my_revstr(char *);
void move_rect(sfIntRect *rect, int offset, int max_value);
char *my_itoa(int x);
int my_display_window(window_s *window, clock_s *clock);
void my_set_text(text_s *text, window_s *window);
void my_set_texture(window_s *window, cursor_s *cursor);
void my_draw_window(window_s *window, text_s *text);
void my_move(clock_s *clock, window_s *window);
void my_mouse_button(event_s *event, cursor_s *cursor, window_s *window);
void my_manage_event(event_s *event, cursor_s *cursor,
text_s *text, window_s *window);
void my_initiate_game(window_s *window, text_s *text,
cursor_s *cursor,  clock_s *clock);
