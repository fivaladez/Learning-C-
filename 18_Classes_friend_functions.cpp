/*
A friend function of a class is defined outside that class' scope but it has
the right to access all private and protected members of the class. Even though
the prototypes for friend functions appear in the class definition,
friends are not member functions.

A friend can be a function, function template, or member function, or
a class or class template, in which case the entire class and
all of its members are friends.
*/
#include <iostream>

using namespace std;

class Box {
   double width;//private as default

   public:
      friend void printWidth( Box box );
      void setWidth( double wid );
};

// Member function definition
void Box::setWidth( double wid ) {
   width = wid;
}

// Note: printWidth() is not a member function of any class.
void printWidth( Box box ) {
   /* Because printWidth() is a friend of Box, it can
   directly access any member of this class */
   cout << "Width of box : " << box.width <<endl;
}

// Main function for the program
int main() {
   Box box;

   // set box width without member function
   box.setWidth(10.0);

   // Use friend function to print the wdith.
   printWidth( box );

   return 0;
}
