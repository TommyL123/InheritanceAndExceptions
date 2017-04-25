//
// Created by Tommy Lik on 4/24/17.
//

//#ifndef TOMMYL123_HW6_RECTANGLE_H
//#define TOMMYL123_HW6_RECTANGLE_H


#include "Point2D.h"
#include "CustomException.h"
#pragma once

template<class T> class Rectangle:public Point2D<T>
{
protected:
    T width;
    T height;
public:

    Rectangle();
    Rectangle(T x, T y, T width, T height);

    T getWidth() const;
    T getHeight() const;
    void setWidth(T inputWidth);
    void setHeight(T inputHeight);
    float area() const;
    float circumference() const;
};

template<class T> Rectangle<T>::Rectangle(){}
template<class T> Rectangle<T>::Rectangle(T x, T y, T width, T height)
{
    if(width < 0 || height < 0)
    {
        throw CustomException(33);
    }
    else
    {
        this->x = x;
        this->y = y;
        this->width = width;
        this->height = height;
    }
}

template<class T> T Rectangle<T>::getWidth() const
{
    return width;
}
template<class T> T Rectangle<T>::getHeight() const
{
    return height;
}

template<class T> void Rectangle<T>::setWidth(T inputWidth)
{
    if(inputWidth <=0)
    {
        throw CustomException(33);
    }
    else
    {
        width = inputWidth;
    }
}
template<class T> void Rectangle<T>::setHeight(T inputHeight)
{
    if(inputHeight <=0)
    {
        throw CustomException(33);
    }
    else
    {
        height = inputHeight;
    }
}

template<class T> float Rectangle<T>::area() const
{
    return (width * height);
}

template<class T> float Rectangle<T>::circumference() const
{
    return ((2*height) + (2*width));
}



}
#endif //TOMMYL123_HW6_RECTANGLE_H
