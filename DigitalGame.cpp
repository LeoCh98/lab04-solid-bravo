//
// Created by Victor on 20/8/2020.
//

#include "DigitalGame.h"

DigitalGame::DigitalGame(const std::string &name, double price, double itemWeight) : Game(name, price),
                                                                                     itemWeight(itemWeight) {}

DigitalGame::~DigitalGame() {

}

double DigitalGame::getItemWeight() const {
    return itemWeight;
}

void DigitalGame::setItemWeight(double itemWeight) {
    DigitalGame::itemWeight = itemWeight;
}

std::string DigitalGame::toString() {
    std::stringstream output;
    output<<Game::toString()
    <<"Item weight: " << getItemWeight() << std::endl;
    return output.str();
}
