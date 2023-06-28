/*
** EPITECH PROJECT, 2022
** MENU
** File description:
** MENU
*/

#include "sprite.h"
#include <stdio.h>

int cha_event(sfRenderWindow* w, sfEvent e, sfFloatRect box)
{
    if (e.type == sfEvtClosed) {
        sfRenderWindow_close(w);
        return 1;
    }
    if (sfMouse_isButtonPressed(sfMouseLeft)) {
        sfVector2i mouse = sfMouse_getPositionRenderWindow(w);
        if (sfFloatRect_contains(&box, mouse.x, mouse.y)) {
            sfRenderWindow_close(w);
        }
    }
    return 0;
}

int event_react(sfRenderWindow* w, sfEvent e, sfFloatRect box)
{
    while (sfRenderWindow_pollEvent(w, &e)) {
        if (cha_event(w, e, box) == 1)
            return 1;
    }
    return 0;
}

int menu(void)
{
    sfVideoMode mode = {800, 600, 32};
    sfRenderWindow* window = sfRenderWindow_create(mode
    ,"menu", sfClose,NULL);
    sfEvent event = {0};
    back_t *back = create_back("res/menu.png");
    sfVector2f vec = {0.50, 0.50};
    sfFloatRect box = (sfFloatRect) {277, 474, 228, 84};
    sfSprite_setScale(back->sprite, vec);
    while (sfRenderWindow_isOpen(window)) {
        if (event_react(window, event, box) == 1)
            return 1;
        draw_back(back, window);
        sfRenderWindow_display(window);
    }
    return 0;
}
