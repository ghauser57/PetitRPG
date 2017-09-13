//
// Created by GeekP on 12/09/2017.
//

#include "App.hpp"
#include <allegro5/system.h>
#include <allegro5/keyboard.h>
#include "../Exception/AppException.hpp"
#include "../Utils/Log.h"

App App::instance = App();

App::App():
    display(NULL),game(NULL),run(false)
{}

void App::loop()
{
    Log().Get(logINFO) << "Starting loop ";
    ALLEGRO_KEYBOARD_STATE key;
    while(run)
    {
        display->render();
        al_get_keyboard_state(&key);
        if(al_key_down(&key, ALLEGRO_KEY_ESCAPE))
            run = false;
    }
}

void App::dispose()
{
    Log().Get(logINFO) << "Dispose app";
    delete display;
    delete game;
}

void App::init()
{
    Log().Get(logINFO) << "Init app";
    if (!al_init()) {
        Log().Get(logERROR) << "Failed to initialize allegro.";
        AppException("Failed to initialize allegro.");
    }
    if (!al_install_keyboard()) {
        Log().Get(logERROR) << "Failed to install keyboard.";
        AppException("Failed to install keyboard.");
    }
}

void App::start()
{
    Log().Get(logINFO) << "Start app";
    display = new Display(APP_NAME, al_map_rgb(26, 188, 156));
    run = true;
    loop();
    dispose();
}

App & App::getInstance()
{
    return instance;
}