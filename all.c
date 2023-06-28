/*
** EPITECH PROJECT, 2022
** all
** File description:
** all
*/

#include "sprite.h"
#include <stdlib.h>

all_t * toto(void)
{
    all_t *all = malloc(sizeof(all_t));
    all->mode = (sfVideoMode) {800, 600, 32};
    all->window = sfRenderWindow_create(all->mode
    ,"shoot duck", sfClose,NULL);
    all->event = (sfEvent) {0};
    all->back = create_back("res/map.png");
    all->mc = create_enemie("res/duck.png");
    all->cursor = create_cursor("res/aim.png");
    all->stop = 0;
    all->clock = sfClock_create();
    all->ti = sfClock_create();
    all->font = sfFont_createFromFile("let/arial.ttf");
    all->text = sfText_create();
    return all;
}
