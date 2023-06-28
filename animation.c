/*
** EPITECH PROJECT, 2022
** move
** File description:
** move resct
*/
#include "sprite.h"
#include <SFML/Graphics.h>
#include <SFML/Window.h>
#include <SFML/System.h>
#include <stddef.h>
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
void fall(enemie_t *mc, int *i);

void move_rect(sfIntRect *rect, int offset, int max_value)
{
    if (rect->left >= max_value) {
        rect->left = 0;
    } else {
        rect->left += offset;
    }
}

void frame(enemie_t *mc, sfClock *clock)
{
    sfTime time;
    time = sfClock_getElapsedTime(clock);
    mc->scd = time.microseconds / 1000000.0;
    if (mc->scd > 0.2) {
        move_rect(&mc->rect, 110, 220);
        sfSprite_setTextureRect(mc->sprite, mc->rect);
        sfClock_restart(clock);
    }
}

void restart(enemie_t *mc)
{
    srand(time(NULL));
    int y = rand() % (300 + 1);
    sfVector2f rest = {-200, y};
    sfVector2f pos = sfSprite_getPosition(mc->sprite);
    if (pos.x >= 900) {
        mc->point -= 75;
        sfSprite_setPosition(mc->sprite, rest);
    }
}

void canard(enemie_t *mc, sfClock *clock, sfClock *ti)
{
    int vit = 600;
    if (mc->point > 500)
        vit = 800;
    if (mc->point > 1000)
        vit = 1000;
    if (mc->point < 1000)
        vit = 1000;
    if (mc->point < 500)
        vit = 600;
    frame(mc, clock);
    sfTime time;
    float seconds;
    time = sfClock_restart(ti);
    seconds = time.microseconds / 1000000.0;
    sfSprite_setTextureRect(mc->sprite, mc->rect);
    sfSprite_move(mc->sprite, (sfVector2f) {vit * seconds , 0});
    restart(mc);
}

void life_n_def(enemie_t *mc, int *stop, sfClock *clock,  sfClock *ti)
{
    if (*stop == 0)
        canard(mc, clock, ti);
    if (*stop == 1) {
        sfTime time;
        float seconds;
        time = sfClock_getElapsedTime(clock);
        seconds = time.microseconds / 1000000.0;
        if (seconds > 0.5) {
            sfSprite_move(mc->sprite, (sfVector2f) {0, 10 * seconds});
            fall(mc, stop);
        }
    }
}
