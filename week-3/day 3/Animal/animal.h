//
// Created by balas on 2019. 07. 10..
//

#ifndef ANIMAL_ANIMAL_H
#define ANIMAL_ANIMAL_H

#include <string>

class animal
{
public:

    animal();

    // getters and setter
    const std::string &getAnimalSpecie() const;
    void setAnimalSpecie(const std::string &animalSpecie);

    int getHunger() const;
    void setHunger(int hunger);

    int getThirst() const;
    void setThirst(int thirst);

    //
    void eat ();
    void drink ();
    void play ();

    virtual ~animal();

    virtual ~animal();


private:
    std::string _AnimalSpecie;
    int _Hunger;
    int _Thirst;
};


#endif //ANIMAL_ANIMAL_H
