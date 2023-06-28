/*
** EPITECH PROJECT, 2022
** pp
** File description:
** sdf
*/

#include "sprite.h"
#include <stdlib.h>
#include <time.h>

enemie_t *create_enemie(char const *path)
{
    srand(time(NULL));
    int y = rand() % (200 + 1);
    enemie_t *mc = malloc(sizeof(enemie_t));
    sfVector2f rest = {-200, y};
    mc->rect.top = 0;
    mc->rect.left = 0;
    mc->rect.width = 110;
    mc->rect.height = 110;
    mc->sprite = sfSprite_create();
    mc->texture = sfTexture_createFromFile(path, NULL);
    sfSprite_setTexture(mc->sprite, mc->texture, sfTrue);
    sfSprite_setTextureRect(mc->sprite, mc->rect);
    sfSprite_setPosition(mc->sprite, rest);
    mc->collision_box = (sfFloatRect) {0, 0, 110, 110};
    mc->point = 0;
    return mc;
}

void draw_player(enemie_t *player, sfRenderWindow *window)
{
    sfRenderWindow_drawSprite(window, player->sprite, NULL);
}

back_t *create_back(char const *path)
{
    back_t *mc = malloc(sizeof(back_t));
    mc->sprite = sfSprite_create();
    mc->texture = sfTexture_createFromFile(path, NULL);
    sfSprite_setTexture(mc->sprite, mc->texture, sfTrue);
    return mc;
}

void draw_back(back_t *player, sfRenderWindow *window)
{
    sfRenderWindow_drawSprite(window, player->sprite, NULL);
}
