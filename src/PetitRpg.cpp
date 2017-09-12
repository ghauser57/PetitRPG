#include <stdio.h>
#include <string>
#include <allegro5/allegro.h>
#include "Engine/Display.hpp"
using namespace std;

int main (int argc, char** argv) {
    if (!al_init()) {
        fprintf(stderr, "Failed to initialize allegro!\n");
        return -1;
    }

    Display display(string("Petit RPG :)"), al_map_rgb(0,0,200));
    al_rest(10.0);

    return 0;
}