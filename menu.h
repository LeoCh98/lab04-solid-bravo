//
// Created by Rafa Cerdas on 8/25/20.
//

#ifndef LAB04_SOLID_MENU_H
#define LAB04_SOLID_MENU_H
#include "IVideoGamesCompany.h"
#include <string>
#include <sstream>
#include "Game.h"
#include "PhysicalGame.h"
#include "DigitalGame.h"
#include "StreamingGame.h"
#include <list>

using namespace std;

class Menu : public Shape {

private:

    list<DigitalGame *>  digitalGam;
    list<PhysicalGame*> physicalGam;
    int numero;


public:
    Menu();
    Menu(int);
    ~Menu();

    int getNumero();
    void setNumero(int);
    void setDigitalGames(DigitalGame*);
    void setPhysicalGame(PhysicalGame*);



    void loadGames() override;
    string toString() override;


//en este caso la interfaz solamente hace la funcion que haciamos anteriormente en los mains
//instanciar objetos en el metodo loadGames y en el toString se encarga de mostrar los datos que estan en el.
// lo hace immprimiendo cada una de las listas que se tienen

};


#endif //LAB04_SOLID_MENU_H
