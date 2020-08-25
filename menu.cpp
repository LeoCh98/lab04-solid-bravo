//
// Created by Rafa Cerdas on 8/25/20.
//

#include "menu.h"



Menu::Menu() {
    numero=0;
}
Menu::Menu(int numero) {
    numero=numero;
}
void Menu::loadGames() {

    Game* Pg1= new PhysicalGame  ("Call of Duty: Black Ops 4 (PS4)",24.66,"3.94 x 0.59 x 5.91 inches; 0.56 Ounces",0.564);
    Pg1->setTax(0.05);


    Game* Dg1= new DigitalGame ("Need For Speed: Head (PC)",35.20,50);
    Dg1->setTax(0.05);

    Game* Pg2= new PhysicalGame ("God of War (PS4)",40.45,"3.94 x 0.59 x 5.91 inches; 0.56 Ounces",0.564);
    Pg2->setTax(0.05);

    Game* Dg2= new DigitalGame ("Grand Thief Auto: San Andreas (PC)",25.20,80);
    Dg2->setTax(0.05);

    Game* Strg1= new StreamingGame (" Grand Thief Auto: San Andreas (PC.Streaming)",25.20,0.05);


    Game* Strg2= new StreamingGame ("Call of Duty: Black Ops 4 (PC.Streaming)",24.66,0.05);
    Strg2->setTax(0.05);


    setDigitalGames(dynamic_cast<DigitalGame *>(Dg1));
    setDigitalGames(dynamic_cast<DigitalGame *>(Dg2));
    setPhysicalGame(dynamic_cast<PhysicalGame *>(Pg1));
    setPhysicalGame(dynamic_cast<PhysicalGame *>(Pg2));
    setStreamingGame(dynamic_cast<StreamingGame*>(Strg1));
    setStreamingGame(dynamic_cast<StreamingGame*>(Strg2));





}

void Menu::setDigitalGames(DigitalGame * digitalGame) {
   digitalGam.push_back(digitalGame);
}

void Menu::setPhysicalGame(PhysicalGame * physicalGame)  {
    physicalGam.push_back(physicalGame);
}
void Menu::setStreamingGame(StreamingGame * streamingGame) {
    streamingGam.push_back(streamingGame);
}


int Menu::getNumero() {
    return numero;
}

void Menu::setNumero(int numero) {

    this->numero=numero;
}

string Menu::toString() {
    stringstream s;
    int cont=getNumero();
    s<<"Los Juegos que se encuentran en existencia en este momento son:"<<endl;
    s<<"los Juegos Digitales son:"<<endl;

    for( auto it = digitalGam.cbegin(); it!= digitalGam.cend();it++)
    {
        s<<cont<<endl;
        s<<it.operator*()->toString()<<endl;
        cont++;
    }
    cont=0;

    s<<"los juegos fisicos:"<<endl;
    for(auto it= physicalGam.cbegin(); it!= physicalGam.cend();it++)
    {
        s<<cont<<endl;

        s<<it.operator*()->toString()<<endl;
        cont++;
    }

    cont=0;

    s<<"los juegos de Streaming:"<<endl;
    for(auto it= streamingGam.cbegin(); it!= streamingGam.cend();it++)
    {
        s<<cont<<endl;

        s<<it.operator*()->toString()<<endl;
        cont++;
    }







    return s.str();
}





Menu::~Menu() noexcept {}



