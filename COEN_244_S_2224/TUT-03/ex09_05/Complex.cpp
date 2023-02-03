// Exercise 9.5 Solution: Complex.cpp
// Member-function definitions for class Complex.
#include <iostream> 
#include <sstream> // for ostringstream class
#include "Complex.h"
using namespace std;

Complex::Complex(double real, double imaginary)
   : realPart(real), imaginaryPart(imaginary) { } 

Complex Complex::add(const Complex &right) const {
   return Complex(
      realPart + right.realPart, imaginaryPart + right.imaginaryPart);
} 

Complex Complex::subtract(const Complex &right) const {
   return Complex(realPart - right.realPart, imaginaryPart - right.imaginaryPart);
} 

string Complex::toString() const {
   ostringstream output;
   output << "(" << realPart << ", " << imaginaryPart << ")";
   return output.str();
} 

void Complex::setComplexNumber(double rp, double ip) {
   realPart = rp;
   imaginaryPart = ip;
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


