//
// Created by m_daragh on 2023-02-08.
//

#include "Rectangle.h"
#include <iostream>
#include <cmath>
using namespace std;
Rectangle::Rectangle() {
    cout << "Constrcutor Rectangle() is called." << endl;
    // You need to create objecs of Point
    p1 = new Point();
    p2 = new Point();
}

Rectangle::Rectangle(const Rectangle& r) {
    cout << "Copy Constrcutor Rectangle(....) is called." << endl;
    p1 = new Point();
    p1->setPoint(r.getX1(), r.getY1());

    p2 = new Point();
    p2->setPoint(r.getX2(), r.getY2());
}

Rectangle::~Rectangle() {
    cout << "Destructor of Rectangle is called." << endl;
    delete p1;
    delete p2;
}

void Rectangle::setRectangle(double x1, double y1, double x2, double y2) {
    p1->setPoint(x1, y1);
    p2->setPoint(x2, y2);
}

double Rectangle::getX1()  const {
    return p1->getX();
}

double Rectangle::getY1()  const {
    return p1->getY();
}

double Rectangle::getX2()  const {
    return p2->getX();
}

double Rectangle::getY2()  const {
    return p2->getY();
}

double Rectangle::area() const {
    return fabs(p1->getX() - p2->getX()) * fabs(p1->getY() - p2->getY());
}

double Rectangle::perimeter() const {
    return 2 * fabs(p1->getX() - p2->getX()) + 2 * fabs(p1->getY() - p2->getY());
}

void Rectangle::print() const {
    cout << "Point 1: ";
    p1->print();
    cout << "Point 2: ";
    p2->print();
}