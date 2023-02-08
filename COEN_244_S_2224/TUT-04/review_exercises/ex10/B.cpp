//
// Created by m_daragh on 2023-02-08.
//

#include "B.h"

#include <iostream>
using namespace std;

void B::print(A &a) {
    // B can access A's private members
    cout << "B can access the private member i: " << a.i;
}