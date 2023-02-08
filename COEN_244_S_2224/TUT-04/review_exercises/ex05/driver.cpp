//
// Created by m_daragh on 2023-02-08.
//

#include <iostream>
#include "Rectangle.h"

using namespace std;

int main() {
    Rectangle r; // This will create an object of class Rectangle and

    r.setRectangle (10.5, 30.4, 23, 10.0);

    // Test the other functions
    cout << "The area is: " << r.area() << endl;
    cout << "The perimeter is: " << r.perimeter() << endl;
    cout << "Information about the rectangle: " << endl;
    r.print();

    return 0;
}