/*
** EPITECH PROJECT, 2022
** SPITE
** File description:
** SPRITE
*/

#pragma once
#include <SFML/Graphics/Rect.h>
#include <SFML/Graphics/Types.h>
#include <SFML/Graphics.h>
#include <SFML/System.h>
#include <SFML/System/Time.h>
#include <SFML/System/Export.h>

typedef struct enemi_s {
    sfFloatRect collision_box;
    sfIntRect rect;
    sfSprite *sprite;
    sfTexture *texture;
    float scd;
    int point;
} enemie_t;

typedef struct mouse_s {
    sfSprite *sprite;
    sfTexture *texture;
    sfVector2i mouse_pos;
} mouse_t;

typedef struct back_s {
    sfSprite *sprite;
    sfTexture *texture;
} back_t;

typedef struct all_s {
    sfVideoMode mode;
    sfRenderWindow* window;
    sfEvent event;
    back_t *back;
    enemie_t *mc;
    mouse_t *cursor;
    int stop;
    sfClock *clock;
    sfClock *ti;
    sfFont* font;
    sfText* text;
} all_t;

void draw_back(back_t *player, sfRenderWindow *window);
back_t *create_back(char const *path);
void canard(enemie_t *mc, sfClock *clock, sfClock *ti);
int shot(enemie_t *mc, sfRenderWindow *window);
void restart(enemie_t *mc);
void frame(enemie_t *mc, sfClock *clock);
void move_rect(sfIntRect *rect, int offset, int max_value);
void draw_cursor(mouse_t *cursor, sfRenderWindow *win);
mouse_t *create_cursor(char const *path);
enemie_t *create_enemie(char const *path);
void draw_player(enemie_t *player, sfRenderWindow *window);
void mouse(sfRenderWindow* window);
void fall(enemie_t *mc, int *stop);
void life_n_def(enemie_t *mc, int *stop, sfClock *clock,  sfClock *ti);
int menu(void);
char *get_str_nbr(int nb);
all_t *toto(void);
char *get_str_nbr(int nb);
