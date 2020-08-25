//
// Created by Maikol Guzman on 8/17/20.
//

#include <iostream>
#include "Game.h"
#include "PhysicalGame.h"
#include "DigitalGame.h"
#include "IVideoGamesCompany.h"
#include "menu.h"
int main() {   Menu menu;
   menu.loadGames();
   std::cout<<menu.toString();


    return 0;
}