/*
** EPITECH PROJECT, 2022
** hitbox
** File description:
** hb
*/

#include "sprite.h"
#include <stdio.h>
#include <SFML/Graphics.h>
#include <SFML/Window.h>
#include <SFML/System.h>
#include <stddef.h>
#include <stdlib.h>
#include <time.h>

enemie_t *create_enemie(char const *path);
void draw_player(enemie_t *player, sfRenderWindow *window);

void fall(enemie_t *mc, int *stop)
{
    int x = -1000;
    if (mc->point >= 400)
        x = -1400;
    if (mc->point >= 9000)
        x = -1600;
    if (mc->point < 400)
        x = -1000;
    sfVector2f rest = {x, rand() % (300 + 1)};
    sfVector2f pos = sfSprite_getPosition(mc->sprite);
    if (pos.y > 600) {
        mc->texture = sfTexture_createFromFile("res/duck.png", NULL);
        sfSprite_setTexture(mc->sprite, mc->texture, sfTrue);
        sfSprite_setPosition(mc->sprite, rest);
        *stop = 0;
        mc->point += 100;
    }
}

int shot(enemie_t *mc, sfRenderWindow *window)
{
    if (sfMouse_isButtonPressed(sfMouseLeft)) {
        sfVector2f pos = sfSprite_getPosition(mc->sprite);
        sfVector2i mouse = sfMouse_getPositionRenderWindow(window);
        mc->collision_box = (sfFloatRect) {pos.x, pos.y, 110, 110};
        if (sfFloatRect_contains(&mc->collision_box, mouse.x, mouse.y)) {
            mc->texture = sfTexture_createFromFile("res/Die.png", NULL);
            sfSprite_setTexture(mc->sprite, mc->texture, sfTrue);
            return 1;
        }
    }
    return 0;
}
