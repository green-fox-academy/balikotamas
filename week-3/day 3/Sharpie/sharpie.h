//
// Created by balas on 2019. 07. 11..
//

#ifndef SHARPIE_SHARPIE_H
#define SHARPIE_SHARPIE_H

#include <string>
#include <ostream>

class sharpie {
private:
    std::string _color;
    float _width;
    float _inkAmount;

public:
    sharpie();

    sharpie(const std::string &color);

    sharpie(const std::string &color, float width, float inkAmount);


    void use();


    void setInkAmount(float inkAmount);
    float getInkAmount() const;

    void setWidth(float width);
    float getWidth() const;

    void setColor(const std::string &color);
    const std::string &getColor() const;
};


#endif //SHARPIE_SHARPIE_H
