//
// Created by m_daragh on 2023-02-08.
//
// Friend functions
#include <iostream>
#include "Rectangle.h"

using namespace std;

int main () {
    Rectangle recta(2, 3);
    Rectangle rectb(0, 0);

    rectb = duplicate(recta);

    cout << rectb.computeArea() << '\n';

    return 0;
}
