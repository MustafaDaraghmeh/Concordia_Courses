//
// Created by m_daragh on 2023-02-08.
//

#include "Rectangle.h"

Rectangle::Rectangle(int a, int b) {
    width = a;  height = b;
}

int Rectangle::computeArea() {
    return width * height;
}

// Note: this function is not a member function of Rectangle

Rectangle duplicate (Rectangle inputRec) {
    Rectangle recResult(inputRec.width, inputRec.height);
    return recResult;
}
