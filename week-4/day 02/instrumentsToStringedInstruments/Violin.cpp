//
// Created by balas on 2019. 07. 16..
//

#include "Violin.h"

Violin::Violin() {
    _name = "Violin";
    _numberOfStrings = 4;
}

std::string Violin::sound() {
    return "Screech";
}
