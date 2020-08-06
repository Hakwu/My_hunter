/*
** EPITECH PROJECT, 2019
** my_hunter.c
** File description:
** a reproduction of the famous game the duck hunt
*/

#include "include/my.h"

int help(int ac, char **av)
{
    for (int i = 1; i <= ac; i++) {
        if (av[i][0] == '-' && av[i][1] == 'h') {
            my_putstr("USAGE : ");
            my_putstr("To play run the binary. The rules are simple :\n");
            my_putstr("  Duck are escaping, you need");
            my_putstr(" to stop them with your gun.\n");
            my_putstr("  If you miss your shot, you lose one life.\n");
            my_putstr("  If one duck manage to escape,");
            my_putstr(" you also lose one life.\n");
            my_putstr("  You have three tries. Good luck\n");
            my_putstr("  To replay you need to restart the binary\n");
            return (0);
        }
    }
}

int main(int ac, char **av)
{
    window_s *window = malloc(sizeof(window_s));
    cursor_s *cursor = malloc(sizeof(cursor_s));
    clock_s *clock = malloc(sizeof(clock_s));
    event_s *event = malloc(sizeof(event_s));
    text_s *text = malloc(sizeof(text_s));

    if (ac == 2 && av[1][0] == '-' && av[1][1] == 'h')
        help(ac, av);
    else {
        my_initiate_game(window, text, cursor, clock);
        while (sfRenderWindow_isOpen(window->window)) {
            my_move(clock, window);
            while (sfRenderWindow_pollEvent(window->window, &event->event))
                my_manage_event(event, cursor, text, window);
            my_draw_window(window, text);
        }
        sfMusic_destroy(window->music);
    }
    return (0);
}
