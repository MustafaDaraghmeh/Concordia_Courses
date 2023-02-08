//
// Created by m_daragh on 2023-02-08.
//

#ifndef CONCORDIA_COURSES_TIME_H
#define CONCORDIA_COURSES_TIME_H


class Time {
public:
    Time();
    void setTime( int, int ,int );
    void printTime() const;

private:
    int hour, minute, second;
};


#endif //CONCORDIA_COURSES_TIME_H
