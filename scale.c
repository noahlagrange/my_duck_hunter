/*
** EPITECH PROJECT, 2022
** scaling
** File description:
** the scale
*/

#include "sprite.h"

void the_scaling(enemie_t *mc)
{
    sfVector2f vec = {0.75, 0.75};
    sfSprite_setScale(mc->sprite, vec);
}
