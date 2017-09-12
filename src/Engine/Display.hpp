//
// Created by GeekP on 12/09/2017.
//

#ifndef PETITRPG_DISPLAY_HPP
#define PETITRPG_DISPLAY_HPP

#include <string>
#include <allegro5/color.h>
#include <allegro5/display.h>

class Display {
    /**
     * Window title
     */
    std::string title;
    /**
     * Window width and height
     */
    unsigned int width, height;
    /**
     * Window background color
     */
    ALLEGRO_COLOR backgroundColor;
    /**
     * Internal lib display
     */
    ALLEGRO_DISPLAY *display;
public:

    //Copy constructor and operator= doesn't need
    //Operator== and Operator!= doesn't need because there are 1 screen at the same time

    /**
     * Create a display windowed with title, width, height and background color
     * @param title Window's title
     * @param width Window's width
     * @param height Window's height
     * @param backgroundColor Window's background color
     */
    Display(const std::string &title, unsigned int width, unsigned int height, const ALLEGRO_COLOR &backgroundColor);
    /**
     * Create a display fullscreen with the maximum screen resolution
     * @param title Window title
     * @param backgroundColor Window's background color
     */
    Display(const std::string &title, const ALLEGRO_COLOR &backgroundColor);
    /**
     * Delete display
     */
    ~Display();

    /**
     * Render display
     *
     * Clear the display with background color and swap buffer
     */
    void render();

};


#endif //PETITRPG_DISPLAY_HPP
