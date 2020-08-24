//
// Created by Maikol Guzman on 8/17/20.
//

#include <iostream>
#include "Game.h"
#include "PhysicalGame.h"
#include "DigitalGame.h"

int main() {
    /*Game game;
    game.setName("Call of Duty: Black Ops 4 (PS4)");
    game.setItemWeight(0.564);
    game.setProductDimensions("3.94 x 0.59 x 5.91 inches; 0.56 Ounces");
    game.setPrice(24.66);
    game.setTax(0.13);
    std::cout << game.toString() << std::endl;
    game.save("game.txt");*/


    /*Pruebas*/
    Game* g1 = new PhysicalGame("Call of Duty: Black Ops 4 (PS4)",24.66,"3.94 x 0.59 x 5.91 inches; 0.56 Ounces",0.564);
    g1->setTax(0.05);
    std::cout<<g1->toString()<<std::endl;

    Game* g2 = new DigitalGame("Need For Speed: Head (PC)",35.20,50);
    g2->setTax(0.05);
    std::cout<<g2->toString()<<std::endl;



    return 0;
}