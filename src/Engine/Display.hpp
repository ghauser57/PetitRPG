//
// Created by GeekP on 12/09/2017.
//

#ifndef PETITRPG_DISPLAY_HPP
#define PETITRPG_DISPLAY_HPP

#include <string>
#include <allegro5/color.h>
#include <allegro5/display.h>

class Display {
    std::string title;
    unsigned int width, height;
    ALLEGRO_COLOR backgroundColor;
    ALLEGRO_DISPLAY *display;
public:
    Display(const std::string &title, unsigned int width, unsigned int height, const ALLEGRO_COLOR &backgroundColor);
    Display(const std::string &title, const ALLEGRO_COLOR &backgroundColor);
    ~Display();
    void render();
};


#endif //PETITRPG_DISPLAY_HPP
