//
// Created by balas on 2019. 07. 11..
//

#ifndef COUNTER_COUNTER_H
#define COUNTER_COUNTER_H
#include <string>
#include <ostream>


class Counter
{
public:
    Counter();
    Counter(int number);

    void add(int x);
    int get();
    void reset();
    void add ();

    void setNumber(int number);
    int getNumber() const;

private:
    int _number;
};


#endif //COUNTER_COUNTER_H
