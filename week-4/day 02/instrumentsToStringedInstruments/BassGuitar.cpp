//
// Created by balas on 2019. 07. 16..
//

#include "BassGuitar.h"

BassGuitar::BassGuitar() {
    _name = "Bass Guitar";
    _numberOfStrings = 4;
}

std::string BassGuitar::sound() {
    return "Duum-duum-duum";
}

BassGuitar::BassGuitar(int numberOfStrings)
{
    numberOfStrings = _numberOfStrings;
}


