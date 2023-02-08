//
// Created by m_daragh on 2023-02-08.
//
#include <iostream>

using std::cout;
using std::endl;

#include "Account.h"

int main() {

    cout <<"Example 1.............." << endl;
    Account* a1 = new Account();
    cout << a1->getBalance() << endl;
    cout << endl;

    cout <<"Example 2.............." << endl;
    Account* a2 = new Account(500, "John");
    cout << a2->getBalance() << endl;
    cout << a2->getOwner() << endl;
    cout << endl;

    cout <<"Example 3.............." << endl;
    Account* a3 = a2;
    cout << a3->getBalance() << endl;
    cout << a3->getOwner() << endl;
    cout << endl;

    cout <<"Example 4.............." << endl;
    delete a2;
    cout << a3->getOwner() << endl;

}