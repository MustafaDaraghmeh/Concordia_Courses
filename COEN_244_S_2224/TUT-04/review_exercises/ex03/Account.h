//
// Created by m_daragh on 2023-02-08.
//

#ifndef CONCORDIA_COURSES_ACCOUNT_H
#define CONCORDIA_COURSES_ACCOUNT_H


class Account {
public:
    Account();
    Account(double, const char*);
    Account(const Account&);
    int getBalance() const;
    void setBalance(double);
    char* getOwner() const;
    void setOwner(char* ow);

    static double getInterestRate();    // returns the interest rate

    ~Account();

private:
    double balance;
    char* owner;
    static double interestRate;   // A class variable
};


#endif //CONCORDIA_COURSES_ACCOUNT_H
