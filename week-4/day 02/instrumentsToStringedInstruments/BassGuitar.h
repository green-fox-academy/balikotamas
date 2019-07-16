//
// Created by balas on 2019. 07. 16..
//

#ifndef INSTRUMENTSTOSTRINGEDINSTRUMENTS_BASSGUITAR_H
#define INSTRUMENTSTOSTRINGEDINSTRUMENTS_BASSGUITAR_H

#include "StringedInstrument.h"

class BassGuitar : public StringedInstrument
{
public:
    BassGuitar();

    BassGuitar(int numberOfStrings);

    std::string sound();

};




#endif //INSTRUMENTSTOSTRINGEDINSTRUMENTS_BASSGUITAR_H
