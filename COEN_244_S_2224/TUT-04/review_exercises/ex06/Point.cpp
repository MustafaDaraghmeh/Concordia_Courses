//
// Created by m_daragh on 2023-02-08.
//

#include "Point.h"

#include <iostream>
using namespace std;

Point::Point()  {
    x = 0.0;
    y = 0.0;
}

void Point::setPoint(double a, double b) {
    x = a;
    y = b;
}

double Point::getX()  const {
    return x;
}

double Point::getY()  const {
    return y;
}

void Point::print() const {
    cout << "Point: " << x << " " << y << endl;
}