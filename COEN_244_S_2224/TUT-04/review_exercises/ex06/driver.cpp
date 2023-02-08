//
// Created by m_daragh on 2023-02-08.
//

#include <iostream>
#include "Rectangle.h"

using namespace std;

int main() {

    cout << "Test 1: Create object of Rectangle statically" << endl;
    Rectangle r1;
    r1.setRectangle (10.5, 30.4, 23, 10.0);
    cout << "The area is: " << r1.area() << endl;
    cout << "The perimeter is: " << r1.perimeter() << endl;
    cout << "Information about the rectangle: " << endl;
    r1.print();
    cout << endl;

    cout << "Test 2: Create object of Rectangle dynamically" << endl;
    Rectangle* r2;
    r2 = new Rectangle();
    r2->setRectangle (5.5, 36.2, 22.5, 15.0);
    cout << "The area is: " << r2->area() << endl;
    cout << "The perimeter is: " << r2->perimeter() << endl;
    cout << "Information about the rectangle: " << endl;
    r2->print();
    delete r2;

    cout << "Test 3: Create object of Rectangle by calling copy constructor" << endl;
    Rectangle r3 = r1;
    r3.print();


    return 0;
}