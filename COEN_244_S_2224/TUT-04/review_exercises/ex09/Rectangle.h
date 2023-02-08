//
// Created by m_daragh on 2023-02-08.
//

#ifndef CONCORDIA_COURSES_RECTANGLE_H
#define CONCORDIA_COURSES_RECTANGLE_H


class Rectangle {
private:
    int width;
    int height;

public:
    Rectangle(int, int); 	  // Constructor
    ~Rectangle() {};	      // Destructor

    int computeArea();	      // Compute area

    // the function duplicate can access the non-public
    // members of Rectangle

    friend Rectangle duplicate(Rectangle);
};

#endif //CONCORDIA_COURSES_RECTANGLE_H
