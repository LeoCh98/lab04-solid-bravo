//
// Created by Rafa Cerdas on 8/25/20.
//

#ifndef LAB04_SOLID_IVIDEOGAMESCOMPANY_H
#define LAB04_SOLID_IVIDEOGAMESCOMPANY_H

#include "Game.h"
#include "PhysicalGame.h"
#include "DigitalGame.h"
#include "StreamingGame.h"

using namespace std;
class Shape: public Game {
public:

    virtual void loadGames()=0;
    virtual string toString()=0;//show the games that have being create.

};


#endif //LAB04_SOLID_IVIDEOGAMESCOMPANY_H
