//
// Created by Victor on 20/8/2020.
//

#ifndef LAB04_SOLID_PHYSICALGAME_H
#define LAB04_SOLID_PHYSICALGAME_H
#include "Game.h"
#include <sstream>


class PhysicalGame: public Game {

private:
    double itemWeight;
    std::string productDimensions;
public:
    PhysicalGame(const std::string &name, double price, const std::string &productDimensions, double itemWeight);

    virtual ~PhysicalGame();

    const std::string &getProductDimensions1() const;

    void setProductDimensions1(const std::string &productDimensions);

    double getItemWeight() const;

    void setItemWeight(double itemWeight);

    std::string toString() override;

};


#endif //LAB04_SOLID_PHYSICALGAME_H
