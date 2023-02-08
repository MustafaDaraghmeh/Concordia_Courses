//
// Created by m_daragh on 2023-02-08.
//
// Class composition. Class Account and Owner. Objects of Accounts are created statically

#include <iostream>

#include "Account.h"
#include "Owner.h"

using namespace std;

int main() {

    Account a1(11111, 500.00);
    Account a2(22222, 900.00);
    Account a3(33333, 1500.00);

    Owner o1(100, "Ric");
    Owner o2(200, "Karen");

    o1.addAccount(a1);
    o1.addAccount(a2);
    cout << o1.getName() << "'s accounts:" << endl;
    o1.listAllAccounts();

    if (o1.searchAccount(11111))
        cout << o1.getName() << " is the owner of Account 11111" << endl;
    else
        cout << o1.getName() << " is not the owner of Account 11111" << endl;

    cout << endl;

    o1.removeAccount(11111);
    cout << o1.getName() << "'s new accounts:" << endl;
    o1.listAllAccounts();

    cout << endl;

    o2.addAccount(a3);
    cout << o2.getName() << "'s accounts:" << endl;
    o2.listAllAccounts();

    return 0;
}