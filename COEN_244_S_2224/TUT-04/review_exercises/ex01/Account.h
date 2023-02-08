//
// Created by m_daragh on 2023-02-08.
//

#ifndef CONCORDIA_COURSES_ACCOUNT_H
#define CONCORDIA_COURSES_ACCOUNT_H


class Account {
public:
    Account();
    Account(double, const char*);
    int getBalance() const;
    void setBalance(double);
    char* getOwner() const;
    void setOwner(char* ow);
    ~Account();

private:
    double balance;
    char* owner;
};


#endif //CONCORDIA_COURSES_ACCOUNT_H
