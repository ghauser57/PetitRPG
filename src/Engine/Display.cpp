//
// Created by GeekP on 12/09/2017.
//

#include "Display.hpp"
#include <allegro5/drawing.h>
#include <allegro5/fullscreen_mode.h>
#include "../Exception/DisplayException.hpp"


Display::Display(const std::string &title, unsigned int width, unsigned int height, const ALLEGRO_COLOR &backgroundColor):
        title(title),width(width),height(height),backgroundColor(backgroundColor)
{
    al_set_new_display_flags(ALLEGRO_WINDOWED | ALLEGRO_RESIZABLE);
    display = al_create_display(width, height);
    if(!display)
    {
        throw DisplayException("Failed to create display.");
    }
    al_set_window_title(display, title.c_str());
    render();
}

Display::Display(const std::string &title, const ALLEGRO_COLOR &backgroundColor):
        title(title), backgroundColor(backgroundColor)
{
    al_set_new_display_flags(ALLEGRO_FULLSCREEN_WINDOW);
    int nbModes = al_get_num_display_modes();
    ALLEGRO_DISPLAY_MODE mode;
    al_get_display_mode(nbModes - 1, &mode);
    display = al_create_display(mode.width, mode.height);
    if(!display)
    {
        throw DisplayException("Failed to create display.");
    }
    al_set_window_title(display, title.c_str());

    width = static_cast<unsigned int>(al_get_display_width(display));
    height = static_cast<unsigned int>(al_get_display_height(display));

    render();
}


Display::~Display()
{
    //al_destroy_display(display);
}

void Display::render()
{
    al_clear_to_color(backgroundColor);
    al_flip_display();
}
