/*
Constructor:
    - A class constructor is a special member function of a class that
      is executed whenever we create new objects of that class.
    - A constructor will have exact same name as the class and it does not
      have any return type at all, not even void.

Destructor:
    - A destructor is a special member function of a class that is executed
      whenever an object of it's class goes out of scope or whenever the
      delete expression is applied to a pointer to the object of that class.

    - A destructor will have exact same name as the class prefixed with a
      tilde (~) and it can neither return a value nor can it take any parameters.
*/
#include <iostream>

using namespace std;
class Line {
   public:
      void setLength( double len );
      double getLength( void );
      Line(double len);  // This is the constructor
      ~Line();  // This is the destructor: declaration

   private:
      double length;
};

// Member functions definitions including constructor
Line::Line( double len) {
   cout << "Object is being created, length = " << len << endl;
   length = len;
}
/* Initialization Lists
Line::Line( double len): length(len) {
   cout << "Object is being created, length = " << len << endl;
}
*/
Line::~Line(void) {
   cout << "Object is being deleted" << endl;
}
void Line::setLength( double len ) {
   length = len;
}
double Line::getLength( void ) {
   return length;
}

// Main function for the program
int main() {
   Line line(10.0);

   // get initially set length.
   cout << "Length of line : " << line.getLength() <<endl;

   // set line length again
   line.setLength(6.0);
   cout << "Length of line : " << line.getLength() <<endl;

   return 0;
}
