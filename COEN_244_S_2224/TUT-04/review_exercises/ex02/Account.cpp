//
// Created by m_daragh on 2023-02-08.
//

#include "Account.h"

#include <iostream>
#include <string.h> // to use strcpy and strlen

using std::cout;
using std::endl;

Account::Account() {
    cout << "Constructor Account() is called" << endl;
    balance = 0.0;
    owner = nullptr;
}

Account::Account(double b, const char* ow) {
    cout << "Constructor Account(double, const char*) is called" << endl;
    balance = b;
    owner = new char[strlen(ow)+1];
    strcpy(owner, ow);
}

Account::Account(const Account& a) {
    cout << "Copy Constructor Account(const Account&) is called" << endl;
    balance = a.getBalance();
    owner = new char[strlen(a.getOwner())+1];
    strcpy(owner, a.getOwner());
}

int Account::getBalance() const {
    return balance;
}

void Account::setBalance(double b) {
    balance = b;
}

char* Account::getOwner() const {
    return owner;
}

void Account::setOwner(char* ow) {
    owner = new char[strlen(ow)+1];
    strcpy(owner, ow);
}

Account::~Account() {
    delete owner;
}