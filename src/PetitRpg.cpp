#include <iostream>
#include "Engine/App.hpp"
#include "Model/Entity.hpp"
#include "Utils/Log.h"
using namespace std;

int main (int argc, char** argv) {

    Log::ReportingLevel() = logDEBUG2;

    Entity entity;
    cout << "main : " << entity << endl;
    entity.move(Vector2I(5,8));
    cout << "main : " << entity << endl;
    entity.move(Vector2I(-10,-16));
    cout << "main : " << entity << endl;

    App app = App::getInstance();
    app.init();
    app.start();

    return 0;
}