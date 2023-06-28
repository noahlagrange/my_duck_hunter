/*
** EPITECH PROJECT, 2022
** MOUSE POSITION
** File description:
** MOUSE
*/

#include "sprite.h"
#include <stdio.h>
#include <SFML/Graphics.h>
#include <SFML/Window.h>
#include <SFML/System.h>
#include <stddef.h>
#include <stdlib.h>

mouse_t *create_cursor(char const *path)
{
    mouse_t *cursor = malloc(sizeof(mouse_t));

    cursor->sprite = sfSprite_create();
    cursor->texture = sfTexture_createFromFile(path, NULL);
    sfSprite_setTexture(cursor->sprite, cursor->texture, sfTrue);
    cursor->mouse_pos = (sfVector2i) {0, 0};
    return cursor;
}

void draw_cursor(mouse_t *cursor, sfRenderWindow *win)
{
    sfVector2f mouse_set = {cursor->mouse_pos.x, cursor->mouse_pos.y};
    sfVector2f reduce = {0.20, 0.20};
    sfSprite_setOrigin(cursor->sprite, (sfVector2f) {288, 288});
    sfSprite_setPosition(cursor->sprite, mouse_set);
    sfSprite_setScale(cursor->sprite, reduce);
    sfRenderWindow_drawSprite(win, cursor->sprite, NULL);
}
