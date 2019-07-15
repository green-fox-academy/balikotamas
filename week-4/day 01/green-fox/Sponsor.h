//
// Created by balas on 2019. 07. 15..
//

#ifndef GREEN_FOX_SPONSOR_H
#define GREEN_FOX_SPONSOR_H

#include "Person.h"

#include <iostream>
#include "Sponsor.h"

class Sponsor : public Person
{
public:
    Sponsor();
    Sponsor(std::string name,int age,Gender gender,std::string company);
    void introduce() override;
    void getGoal() override;
    void hire();

private:
    std::string _company;
    int _hiredStudents;
};

#endif //GREEN_FOX_SPONSOR_H
