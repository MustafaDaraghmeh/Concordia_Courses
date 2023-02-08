//
// Created by m_daragh on 2023-02-08.
//

#ifndef CONCORDIA_COURSES_A_H
#define CONCORDIA_COURSES_A_H


class A {
    friend class B;  // All B's functions are A's friends

private:
    int i;     // private member of A

public:
    A(int x);
};


#endif //CONCORDIA_COURSES_A_H
