//
// Created by balas on 2019. 07. 10..
//

#include "animal.h"

const std::string &animal::getAnimalSpecie() const
{
    return _AnimalSpecie;
}

void animal::setAnimalSpecie(const std::string &animalSpecie)
{
    animal::_AnimalSpecie = animalSpecie;
}

int animal::getHunger() const
{
    return _Hunger;
}

void animal::setHunger(int hunger)
{
    animal::_Hunger = hunger;
}

int animal::getThirst() const
{
    return _Thirst;
}

void animal::setThirst(int thirst)
{
    animal::_Thirst = thirst;
}

void animal::eat()
{
    --_Hunger;
}

void animal::drink()
{
    --_Thirst;
}

void animal::play() {
    ++_Thirst;
    ++_Hunger;
}

animal::animal() : _Thirst(50), _Hunger(50) {}

