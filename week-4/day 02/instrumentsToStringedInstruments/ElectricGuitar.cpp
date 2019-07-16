//
// Created by balas on 2019. 07. 16..
//

#include "ElectricGuitar.h"


ElectricGuitar::ElectricGuitar() {
    _name = "Electric Guitar";
    _numberOfStrings = 6;
}

std::string ElectricGuitar::sound() {
    return "Twang";
}

ElectricGuitar::ElectricGuitar(int numberOfStrings) {
    _numberOfStrings = numberOfStrings;
}
