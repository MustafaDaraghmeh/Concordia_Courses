//
// Created by m_daragh on 2023-02-08.
//
#include <iostream>
using namespace std;

#include "Date.h"
Date::Date(int d, int m, int y, int hour, int min, int sec) {
    cout << "Constructor Date(...) is called" << endl;
    day = d;
    month = m;
    year = y ;
    time.setTime(hour, min, sec);
}

void Date::printDate() const {
    cout << month << "/" << day << "/" << year << " ";
    time.printTime() ;
}