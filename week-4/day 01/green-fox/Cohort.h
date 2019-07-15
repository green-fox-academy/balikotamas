//
// Created by balas on 2019. 07. 15..
//

#ifndef GREEN_FOX_COHORT_H
#define GREEN_FOX_COHORT_H

#include "Student.h"
#include "Mentor.h"
#include <vector>

class Cohort : public Student, public Mentor
{
public:
    Cohort(std::string name);
    void addStudent(Student*);
    void addMentor(Mentor*);
    void info();

private:
    std::string _name;
    std::vector <Student*> _students;
    std::vector <Mentor*> _mentors;
};


#endif //GREEN_FOX_COHORT_H
