#pragma once

#ifndef GAME_H
#define GAME_H

#include <SFML/Graphics.hpp>

using namespace sf;

class game
{
    public:
        // Constructor
        game(Vector2i dimension, std::string title);

        void gameLoop();

        void draw();


    private:

        RenderWindow * window1;

        int fps;

        Texture * txt1;

        Sprite * spr1;

        Texture * txt2;

        Sprite * spr2;
};

#endif // GAME_H
