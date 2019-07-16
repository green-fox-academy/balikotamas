//
// Created by balas on 2019. 07. 16..
//

#ifndef INSTRUMENTSTOSTRINGEDINSTRUMENTS_INSTRUMENTS_H
#define INSTRUMENTSTOSTRINGEDINSTRUMENTS_INSTRUMENTS_H

#include <string>


class Instruments {

public:
    virtual void play() = 0;

protected:
    std::string _name;

};


#endif //INSTRUMENTSTOSTRINGEDINSTRUMENTS_INSTRUMENTS_H
