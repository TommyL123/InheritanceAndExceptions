//
// Created by Tommy Lik on 4/24/17.
//

//#ifndef TOMMYL123_HW6_SQUARE_H
//#define TOMMYL123_HW6_SQUARE_H


#include "Rectangle.h"
#include "Point2D.h"
#pragma once


template<class T>

class Circle : public Point2D<T> {

private:

    T radius;

public:
    Circle() : radius(0.0) {}

    Circle(T x, T y, T newRadius) : Point2D<T>(x, y){

        radius=newRadius;

        if ( radius <= 0){

            throw CustomException(22);
        }
    }
    T getRadius();

    void setRadius(T newRadius);

    virtual float area() const;

    virtual float circumference() const;

};

template<class T>


T Circle<T>::getRadius() {

    return radius;
}

template<class T>

void Circle<T>::setRadius(T newRadius) {

    radius = newRadius;
}


template<class T>

float Circle<T>::area() const {

    const float pi = 3.14;
    
    return pi * (radius * radius);
}

template<class T>

float Circle<T>::circumference() const {
    
    const float pi = 3.14;
    return 2 * pi * radius;

}
#endif //TOMMYL123_HW6_SQUARE_H
