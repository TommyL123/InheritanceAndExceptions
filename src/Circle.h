//
// Created by Tommy Lik on 4/24/17.
//


#include "Point2D.h"
#include "CustomException.h"
#pragma once


//#ifndef TOMMYL123_HW6_CIRCLE_H
//#define TOMMYL123_HW6_CIRCLE_H

template<class T> class Circle:public Point2D<T>
{

protected:

    T radius;


public:

    Circle();
    Circle(T x, T y, T radius);

    T getRadius() const;

    void setRadius(T inputRadius);

    float area() const;

    float circumference() const;


};


template<class T> Circle<T>::Circle() {}

template<class T> Circle<T>::Circle(T x, T y, T radius)
{
    if(radius < 0 )
    {
        throw CustomException(22);
    }
    else
    {
        this->x = x;
        this->y = y;
        this->radius = radius;
    }
}


template<class T> T Circle<T>::getRadius() const
{
    return radius;
}
template<class T> void Circle<T>::setRadius(T inputRadius)
{
    if(inputRadius <= 0)
    {
        throw CustomException(22);
    }
    else
    {
        radius= inputRadius;
    }
}

template<class T> float Circle<T>::area() const
{
    return (3.14 * (radius * radius));
}
template<class T> float Circle<T>::circumference() const
{
    return (2*3.14*radius);
}


#endif //TOMMYL123_HW6_CIRCLE_H
