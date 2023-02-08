//
// Created by m_daragh on 2023-02-08.
//

#ifndef CONCORDIA_COURSES_RECTANGLE_H
#define CONCORDIA_COURSES_RECTANGLE_H


#include "Point.h"

class Rectangle {
private: 	    // A rectangle has two points, i.e., two objects of class Point
    Point p1;   // The first point
    Point p2;   // The second point

public:
    Rectangle(); // constructor
    void setRectangle(double, double, double, double); // sets x1, y1, x2, y2
    double getX1() const;       // returns x1
    double getY1() const;       // returns y1
    double getX2() const;       // returns x2
    double getY2() const;       // returns y2
    double area() const;        // computes the area of the rectangle
    double perimeter() const;   // computes the perimeter of the rectangle
    void print() const;         // prints information about the rectangle
};


#endif //CONCORDIA_COURSES_RECTANGLE_H
