//
// Created by balas on 2019. 07. 11..
//

#include "Counter.h"

int Counter::getNumber() const
{
    return _number;
}

void Counter::setNumber(int number)
{
    Counter::_number = number;
}



void Counter::add(int y) {
    _number + y;

}

int Counter::get()
{
    return _number;
}

void Counter::reset() {
    _number = 0;

}

void Counter::add()
{
    _number++;
}

Counter::Counter(int number) : _number(number)
{
    _number = 0;
}
