//
// Created by Victor on 20/8/2020.
//

#include "StreamingGame.h"

StreamingGame::StreamingGame() {}

StreamingGame::StreamingGame(const std::string &name, double price, double tax) : Game(
        name, price, tax), {}

StreamingGame::~StreamingGame() {

}

std::string StreamingGame::toString() {
    std::stringstream output;
    output<<Game::toString();
    return output.str();
}


