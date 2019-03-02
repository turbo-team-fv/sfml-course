#include "game.h"
#include "SFML/Graphics.hpp"
#include <iostream>
#include <stdlib.h>

using namespace sf;
using namespace std;

game::game(Vector2f resol, std::string title)
{
    window1 = new RenderWindow(VideoMode(resol.x,resol.y), title);
    event = new Event();
    gameloop();
}

void game::gameloop()
{
    while(1)
    {
        process_events();
        draw();
    }
}

void game::process_events()
{
    while(window1->pollEvent(*event));
    {
        switch(event->type)
        {

        case Event::Closed:
            exit(1);
            break;

        }
    }
}

void game::load_resources()
{

    txt_character1 =  new Texture();
    txt_character1->loadFromFile("1.png");
    spr_character1 = new Sprite(*txt_character1);
}
void game::draw()
{
    window1->clear();
    window1->draw(*spr_character1);
    window1->display();
}