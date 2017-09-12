//
// Created by GeekP on 12/09/2017.
//

#include "Display.hpp"
#include <allegro5/drawing.h>
#include "../Exception/DisplayException.hpp"

Display::Display(const std::string &title, unsigned int height, unsigned int width, const ALLEGRO_COLOR &backgroundColor):
        title(title),height(height),width(width),backgroundColor(backgroundColor)
{
    display = al_create_display(height, width);
    if(!display)
    {
        throw new DisplayException("Failed to create display.");
    }
    al_set_window_title(display, title.c_str());
    render();
}

Display::~Display()
{
    al_destroy_display(display);
}

void Display::render()
{
    al_clear_to_color(backgroundColor);
    al_flip_display();
}