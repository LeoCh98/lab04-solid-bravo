//
// Created by Victor on 20/8/2020.
//

#include "PhysicalGame.h"

PhysicalGame::PhysicalGame(const std::string &name, double price, const std::string &productDimensions,
                           double itemWeight) : Game(name, price), itemWeight(itemWeight), productDimensions(productDimensions) {}

PhysicalGame::~PhysicalGame() {

}

const std::string &PhysicalGame::getProductDimensions1() const {
    return productDimensions;
}

void PhysicalGame::setProductDimensions1(const std::string &productDimensions) {
    PhysicalGame::productDimensions = productDimensions;
}

double PhysicalGame::getItemWeight() const {
    return itemWeight;
}

void PhysicalGame::setItemWeight(double itemWeight) {
    PhysicalGame::itemWeight = itemWeight;
}

std::string PhysicalGame::toString() {
    std::stringstream output;
    output<<Game::toString()
    <<"Product Dimensions: "<< getProductDimensions1()<< std::endl
    <<"Item weight: " << getItemWeight() << std::endl;
    return output.str();
}
