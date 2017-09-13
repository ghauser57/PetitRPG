//
// Created by GeekP on 12/09/2017.
//

#ifndef PETITRPG_APP_HPP
#define PETITRPG_APP_HPP

#include "Display.hpp"
#include "Game.hpp"

/**
 * Run the Application
 */
class App {
    const std::string APP_NAME = "Pixel Adventure";
    static App instance;
    Display *display;
    Game *game;
    bool run;

    /**
     * Main loop game
     * Render on display
     */
    void loop();

    /**
     * Delete Game and Display
     */
    void dispose();
    App();
public:
   ~App(){dispose();}

    /**
     * Initialize Allegro
     */
    void init();

    /**
     * Create a display and game
     * Launch the loop
     */
    void start();
    static App & getInstance();
};


#endif //PETITRPG_APP_HPP
