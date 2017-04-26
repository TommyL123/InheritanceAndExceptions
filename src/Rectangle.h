//
// Created by Tommy Lik on 4/24/17.
//

//#ifndef TOMMYL123_HW6_RECTANGLE_H
//#define TOMMYL123_HW6_RECTANGLE_H

#include "Point2D.h"
#include "CustomException.h"
#pragma once

template<class T>
class Rectangle : public Point2D<T> {
    
protected:
    
    T width;
    T height;

    
public:
    
    Rectangle() : width(0), height(0) {}

    Rectangle(T x, T y, T nwidth, T nheight) : Point2D<T>(x, y) {
        
        width = nwidth;
        
        height = nheight;
        if( height <=0 || width  <=0){
            
             
            throw CustomException(33);
        }
    }

    T getWidth() const;

    T getHeight() const;

    void setWidth(T newWidth);

    void setHeight(T newHeight);

    virtual float area () const;

    virtual float circumference() const;

};

template<class T>
T Rectangle<T>::getWidth()const {
    return width;
}

template<class T>
T Rectangle<T>::getHeight() const {
    return height;
}

template<class T>
void Rectangle<T>::setWidth(T newWidth) {
    width = newWidth;
}

template<class T>
void Rectangle<T>::setHeight(T newHeight) {
    height = newHeight;
}
template <class T>
float Rectangle<T>::area() const{
    return width * height;
}
template <class T>
float Rectangle<T>::circumference()const {
    return (width * 2 + height * 2);
}


#endif //TOMMYL123_HW6_RECTANGLE_H
