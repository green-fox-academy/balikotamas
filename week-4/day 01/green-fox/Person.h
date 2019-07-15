//
// Created by balas on 2019. 07. 15..
//

#ifndef GREEN_FOX_PERSON_H
#define GREEN_FOX_PERSON_H

#include <string>

enum Gender {
    MALE,
    FEMALE
};

std::string GenderToString (Gender gender);

class Person
{
public:
    Person();
    Person(std::string name, int age, Gender gender);
    virtual void introduce();
    virtual void getGoal();

protected:
    std::string _name;
    int _age;
    Gender _gender;
};


#endif //GREEN_FOX_PERSON_H
