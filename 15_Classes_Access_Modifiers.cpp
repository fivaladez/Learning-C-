/*
    There are 3 types:
        - public: A public member is accessible from anywhere outside the class
          but within a program.

        - private: A private member variable or function cannot be accessed,
          or even viewed from outside the class. Only the class and friend
          functions can access private members.

        - protected: A protected member variable or function is very similar
          to a private member but it provided one additional benefit that
          they can be accessed in child classes which are called derived classes.

*/
#include <iostream>
using namespace std;

class Box {
   protected:
      double width;
   private:
      double width2;
};

class SmallBox:Box { // SmallBox is the derived class.
   public:
      void setSmallWidth( double wid );
      double getSmallWidth( void );
};

// Member functions of child class
double SmallBox::getSmallWidth(void) {
   return width ;
}

void SmallBox::setSmallWidth( double wid ) {
   width = wid;
}

// Main function for the program
int main() {
   SmallBox box;

   // set box width using member function
   box.setSmallWidth(5.0);
   cout << "Width of box : "<< box.getSmallWidth() << endl;
   //Ilegal expression because that variable is private
   //box.width2 = 3;

   Box box2;
   //Ilegal expression because that variable is private
   //box2.width2 = 4;

   return 0;
}
