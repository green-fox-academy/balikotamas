//
// Created by balas on 2019. 07. 11..
//

#include "sharpie.h"


const std::string &sharpie::getColor() const
{
    return _color;
}

void sharpie::setColor(const std::string &color)
{
    sharpie::_color = color;
}

float sharpie::getWidth() const
{
    return _width;
}

void sharpie::setWidth(float width)
{
    sharpie::_width = width;
}

float sharpie::getInkAmount() const
{
    return _inkAmount;
}

void sharpie::setInkAmount(float inkAmount)
{
    sharpie::_inkAmount = inkAmount;
}

void sharpie::use() {
    _inkAmount--;
}




sharpie::sharpie(): _inkAmount(100)
{}

sharpie::sharpie(const std::string &color, float width, float inkAmount) : _color(color), _width(width),
                                                                           _inkAmount(inkAmount)
{}













