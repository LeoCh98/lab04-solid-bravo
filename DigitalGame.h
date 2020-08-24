//
// Created by Victor on 20/8/2020.
//

#ifndef LAB04_SOLID_DIGITALGAME_H
#define LAB04_SOLID_DIGITALGAME_H
#include "Game.h"


class DigitalGame: public Game {
private:
    double itemWeight;
public:
    DigitalGame(const std::string &name, double price, double itemWeight);

    virtual ~DigitalGame();

    double getItemWeight() const;

    void setItemWeight(double itemWeight);

    std::string toString() override;
};


#endif //LAB04_SOLID_DIGITALGAME_H
