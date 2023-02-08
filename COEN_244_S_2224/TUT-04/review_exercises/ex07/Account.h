//
// Created by m_daragh on 2023-02-08.
//

#ifndef CONCORDIA_COURSES_ACCOUNT_H
#define CONCORDIA_COURSES_ACCOUNT_H


class Account {
private:
    int accountNum;      // Account number
    double balance;      // Account balance

public:
    Account();	                     // Default constructor
    Account(int, double);            // Regular constructor
    Account(const Account&);         // Copy constructor
    ~Account();                      // Destructor

    int getAccountNumber() const;    // Returns account number
    double withdrawal(double);       // Makes a withdrawal
    double deposit(double);          // Makes a deposit
    void setBalance(double);         // Sets the balance
    double getBalance() const;       // Returns the balance
};


#endif //CONCORDIA_COURSES_ACCOUNT_H
