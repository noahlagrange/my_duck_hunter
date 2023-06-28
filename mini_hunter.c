/*
** EPITECH PROJECT, 2022
** DUCK
** File description:
** DUCK
*/

#include "sprite.h"
#include <stdio.h>
#include <SFML/Graphics.h>
#include <SFML/Window.h>
#include <SFML/System.h>
#include <stddef.h>
#include <stdlib.h>

int my_strcmp(char const *s1, char const *s2);
int my_printf(const char *format, ...);
void the_scaling(enemie_t *mc);

int change_event(sfRenderWindow *w, sfEvent e, enemie_t *mc, mouse_t *c)
{
    if (e.type == sfEvtClosed)
        sfRenderWindow_close(w);
    c->mouse_pos = sfMouse_getPositionRenderWindow(w);
    int res = shot(mc, w);
    if (res == 1) {
        return 1;
    }
    return 0;
}

void hit_that(int *i, int y)
{
    if (y == 1)
        *i = 1;
}

void draw_func(all_t *all)
{
    sfRenderWindow_clear(all->window, sfBlue);
    draw_back(all->back, all->window);
    sfRenderWindow_drawText(all->window, all->text, NULL);
    draw_player(all->mc, all->window);
    draw_cursor(all->cursor, all->window);
    sfRenderWindow_display(all->window);
}

void game(void)
{
    all_t *all = toto();
    the_scaling(all->mc);
    sfRenderWindow_setFramerateLimit(all->window, 60);
    sfRenderWindow_setMouseCursorVisible(all->window, sfFalse);
    while (sfRenderWindow_isOpen(all->window)) {
        char *nb = get_str_nbr(all->mc->point);
        sfText_setString(all->text, nb);
        free(nb);
        sfText_setFont(all->text, all->font);
        sfText_setCharacterSize(all->text, 50);
        life_n_def(all->mc, &all->stop, all->clock, all->ti);
        while (sfRenderWindow_pollEvent(all->window, &all->event)) {
            hit_that(&all->stop,change_event(all->window,
            all->event, all->mc, all->cursor));
        }
        draw_func(all);
    }
}

int main(int ac, char **av)
{
    if (ac == 1) {
        if (menu() == 1)
            return 0;
        game();
        return 0;
    }
    int buf = my_strcmp(av[1], "-h");
    if (ac == 2 && buf == 0) {
        my_printf("                this is a duck hunt\n\n");
        my_printf("GAMEPLAY:\n");
        my_printf("\tyou should shot the duck on the screen\n\n");
        my_printf("\tfor that you have to use the click left\n\n");
        my_printf("\tthe duck will appear one the left of the screen\n\n");
        my_printf("   good luck \n\n\n");
        return 0;
    }
    return 0;
}
