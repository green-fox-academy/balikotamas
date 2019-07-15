//
// Created by balas on 2019. 07. 15..
//

#ifndef INC_01_GREEN_FOX_STUDENT_H
#define INC_01_GREEN_FOX_STUDENT_H

#include "Person.h"

class Student : public Person
{
public:
    Student();
    Student(std::string name, int age, Gender gender, std::string previousOrganization);
    void getGoal() override;
    void introduce() override;
    void skipDays(int skippedDays);

private:
    std::string _previousOrganization;
    int _skippedDays;

};
#endif //GREEN_FOX_STUDENT_H
