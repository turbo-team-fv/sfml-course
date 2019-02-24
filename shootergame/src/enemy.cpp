#include "enemy.h"
#include <stdlib.h>
#include <iostream>
#include "SFML/Graphics.hpp"


using namespace std;
enemy::enemy(Vector2f position)
{
//        srand(time(NULL)); For random random
    int enemy_number;

    enemy_number = rand() % 3 +1; // random between 1 and 3

    std::string path;

    path= "monster"+ std::to_string(enemy_number)+ ".jpg";
    txt_monster.loadFromFile(path);
    spr_monster.setTexture(txt_monster);

    spr_monster.setPosition(position);
}

Sprite enemy::get_sprite()
{

    return spr_monster;
}

