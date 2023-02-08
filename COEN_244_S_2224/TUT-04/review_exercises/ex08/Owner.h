//
// Created by m_daragh on 2023-02-08.
//

#ifndef CONCORDIA_COURSES_OWNER_H
#define CONCORDIA_COURSES_OWNER_H

#include <string>
using namespace std;

#include "Account.h"

class Owner {
private:
    int id;      // Owner id
    string name; // Owner name

    // We omitted other owner's info for simplicity

    Account* accounts;      // List of accounts of this person
    const int maxAccounts;	// Max accounts a person can have
    int numAccounts;        // The current number of accounts held  by this owner

public:
    Owner();	            // Default constructor
    Owner(int, string);     // Initializes attributes of Owner with user input
    Owner(const Owner&);    // Copy constructor
    ~Owner();               // Destructor needed is Owner contains pointers

    /* Getters and setter */
    int getID() const;
    string getName() const;

    /* Subsystem that manages arrays */

    void addAccount(const Account&);        // Adds an account to the person
    void removeAccount(int);                // Removes an account
    void listAllAccounts() const;	        // Displays all accounts of the person
    bool searchAccount(int) const;          // Searches if the account number entered is an account of this person
};

#endif //CONCORDIA_COURSES_OWNER_H
