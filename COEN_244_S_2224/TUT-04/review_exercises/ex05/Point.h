//
// Created by m_daragh on 2023-02-08.
//

#ifndef CONCORDIA_COURSES_POINT_H
#define CONCORDIA_COURSES_POINT_H


class Point {
private:
    double x;   // x coordinate
    double y;   // y coordinate

public:
    Point();                            // constructor
    void setPoint(double, double);      // sets x, y
    double getX() const;                // returns x
    double getY() const;                // returns y
    void print() const;                 // prints information about point
};


#endif //CONCORDIA_COURSES_POINT_H
