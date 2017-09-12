//
// Created by GeekP on 12/09/2017.
//

#include "App.hpp"
#include <allegro5/system.h>
#include <allegro5/keyboard.h>
#include "../Exception/AppException.hpp"

App App::instance = App();

App::App():
    display(NULL),game(NULL),run(false)
{}

void App::loop()
{
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
    delete display;
    delete game;
}

void App::init()
{
    if (!al_init()) {
        AppException("Failed to initialize allegro.");
    }
    if (!al_install_keyboard()) {
        AppException("Failed to install keyboard.");
    }
}

void App::start()
{
    display = new Display(APP_NAME, al_map_rgb(0,0,200));
    run = true;
    loop();
    dispose();
}

App & App::getInstance()
{
    return instance;
}