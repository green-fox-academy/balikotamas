//
// Created by balas on 2019. 07. 16..
//

#ifndef INSTRUMENTSTOSTRINGEDINSTRUMENTS_ELECTRICGUITAR_H
#define INSTRUMENTSTOSTRINGEDINSTRUMENTS_ELECTRICGUITAR_H

#include "StringedInstrument.h"


class ElectricGuitar : public StringedInstrument
{
public:
    ElectricGuitar();

    std::string sound() override;

    ElectricGuitar(int numberOfStrings);
};


#endif //INSTRUMENTSTOSTRINGEDINSTRUMENTS_ELECTRICGUITAR_H
