#include "Engine/App.hpp"

int main (int argc, char** argv) {

    App app = App::getInstance();
    app.init();
    app.start();

    return 0;
}