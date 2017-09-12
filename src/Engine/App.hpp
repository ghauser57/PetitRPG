//
// Created by GeekP on 12/09/2017.
//

#ifndef PETITRPG_APP_HPP
#define PETITRPG_APP_HPP

#include "Display.hpp"
#include "Game.hpp"

class App {
    const std::string APP_NAME = "Petit RPG :)";
    //static App &instance;
    Display *display;
    Game *game;
    bool run;
    void loop();
    void dispose();
public:
    App();
//    ~App(){dispose();}
    void init();
    void start();
    /*static App & getInstance()
    {   if(instance==NULL)
            instance = new App();
        return instance;}*/
};


#endif //PETITRPG_APP_HPP
