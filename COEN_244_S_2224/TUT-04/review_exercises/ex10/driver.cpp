//
// Created by m_daragh on 2023-02-08.
//


//#include "A.h"
#include "B.h"
int main()  {

    A a(10);
    B b;

    //Note that B can access A's private member

    b.print (a);
    b.mean(5,6);
    return 0;
}