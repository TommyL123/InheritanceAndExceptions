//
// Created by Tommy Lik on 4/25/17.
//

#ifndef TOMMYL123_HW6_SQUARE_H
#define TOMMYL123_HW6_SQUARE_H
#include "Rectangle.h"
#include "Point2D.h"
#pragma once


template<class T> class Square: public Rectangle<T>

{

protected:
    T side;
public:
    Square(T x, T y, T side);

};

template<class T> Square<T>::Square(T x, T y, T side)

{

    this->x = x;
    this->y = y;
    this->width = side;
    this->height = side;
    this->side = side;

    if (this->height < 0 || this->width < 0 || this->side < 0)

    {

        throw CustomException(33);

    }
}
#endif //TOMMYL123_HW6_SQUARE_H
