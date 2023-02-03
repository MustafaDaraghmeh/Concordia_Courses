// Exercise 9.4 Solution: Time.cpp
// Member-function definitions for class Time.
#include <iomanip> // for setw and setfill stream manipulators
#include <stdexcept> // for invalid_argument exception class     
#include <sstream> // for ostringstream class
#include <string>
#include <ctime>
#include <stdexcept> // for illegal_argument exception class
#include "Time.h" // include definition of class Time from Time.h
using namespace std;

Time::Time() : hour(0), minute(0), second(0) {
   const time_t currentTime{time(0)};
   const tm *localTime{localtime(&currentTime)};
   setTime(localTime->tm_hour, localTime->tm_min, localTime->tm_sec);
} 

// set new Time value using universal time
void Time::setTime(int h, int m, int s) {
   // validate hour, minute and second


} 

// return Time as a string in universal-time format (HH:MM:SS)
string Time::toUniversalString() const {
 // returns the formatted string
}

// return Time as string in standard-time format (HH:MM:SS AM or PM)
string Time::toStandardString() const {
// returns the formatted string
}

/**************************************************************************
 * (C) Copyright 1992-2017 by Deitel & Associates, Inc. and               *
 * Pearson Education, Inc. All Rights Reserved.                           *
 *                                                                        *
 * DISCLAIMER: The authors and publisher of this book have used their     *
 * best efforts in preparing the book. These efforts include the          *
 * development, research, and testing of the theories and programs        *
 * to determine their effectiveness. The authors and publisher make       *
 * no warranty of any kind, expressed or implied, with regard to these    *
 * programs or to the documentation contained in these books. The authors *
 * and publisher shall not be liable in any event for incidental or       *
 * consequential damages in connection with, or arising out of, the       *
 * furnishing, performance, or use of these programs.                     *
 **************************************************************************/


