//
// Created by m_daragh on 2023-02-08.
//

#ifndef CONCORDIA_COURSES_B_H
#define CONCORDIA_COURSES_B_H


#include "A.h"

class B {
public:
    B() { }
    void print(A &a);
    inline int mean(int i, int j) { return (i + j)/2; }
};


#endif //CONCORDIA_COURSES_B_H
