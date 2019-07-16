//
// Created by balas on 2019. 07. 16..
//

#ifndef INSTRUMENTSTOSTRINGEDINSTRUMENTS_VIOLIN_H
#define INSTRUMENTSTOSTRINGEDINSTRUMENTS_VIOLIN_H

#include "StringedInstrument.h"


class Violin : public StringedInstrument
{
public:
    Violin();
    std::string sound() override;
};


#endif //INSTRUMENTSTOSTRINGEDINSTRUMENTS_VIOLIN_H
