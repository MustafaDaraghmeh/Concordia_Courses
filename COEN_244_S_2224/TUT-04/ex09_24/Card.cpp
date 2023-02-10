// Exercise 9.23 Solution: Card.cpp
// Member-function definitions and array initializers for the Card class.
#include "Card.h"
using namespace std;

// contents of arrays to convert index into name
const string Card::faceNames[FACES] =
   { "Ace", "Deuce", "Three", "Four", "Five", "Six", 
     "Seven", "Eight", "Nine", "Ten", "Jack", "Queen", "King" };
const string Card::suitNames[SUITS] =
   { "Hearts", "Diamonds", "Clubs", "Spades" };

// Card constructor initializes face and suit
Card::Card(Face cardFace, Suit cardSuit) {
   face = cardFace;
   suit = cardSuit;
} 

// returns a string representation of a Card
string Card::toString() const {
   // strings can be concatenated with +
   return faceNames[static_cast<int>(face)] + " of " + suitNames[static_cast<int>(suit)];
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
