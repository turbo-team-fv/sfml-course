#include <SFML/Graphics.hpp>

#include <game.h>

using namespace sf;

int main(int argc, char * args[])
{
//    Vector2i dimension;
//
//    dimension.x = 800;
//    dimension.y = 600;

    game * match1;

    match1 = new game({800,600}, "buck rogers");


    return 0;
}
