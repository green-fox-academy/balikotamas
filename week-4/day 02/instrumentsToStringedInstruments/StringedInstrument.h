//
// Created by balas on 2019. 07. 16..
//

#ifndef INSTRUMENTSTOSTRINGEDINSTRUMENTS_STRINGEDINSTRUMENT_H
#define INSTRUMENTSTOSTRINGEDINSTRUMENTS_STRINGEDINSTRUMENT_H

#include "Instruments.h"

class StringedInstrument : public Instruments
{
protected:
    int _numberOfStrings;

public:
    void play() override ;
    virtual std::string sound() = 0;

};


#endif //INSTRUMENTSTOSTRINGEDINSTRUMENTS_STRINGEDINSTRUMENT_H
