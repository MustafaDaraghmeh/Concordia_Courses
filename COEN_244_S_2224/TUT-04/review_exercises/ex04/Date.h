//
// Created by m_daragh on 2023-02-08.
//

#ifndef CONCORDIA_COURSES_DATE_H
#define CONCORDIA_COURSES_DATE_H
#include "Time.h"

class Date {
public:
    Date(int, int, int, int, int, int);   // sets day, month, year, hours, minutes, seconds
    void printDate() const;   	    // print date to the screen

private:
    int day, month, year;
    Time time;   // a component object
};


#endif //CONCORDIA_COURSES_DATE_H
