//
// Created by m_daragh on 2023-02-08.
//
#include <iostream>
using namespace std;
#include "Date.h"

int main()
{
    Date date(10, 12, 2006, 10, 20, 45);
    cout << "The date is:" << endl;
    date.printDate();
}