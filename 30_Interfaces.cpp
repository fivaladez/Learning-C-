/*
An interface describes the behavior or capabilities of a C++ class without
committing to a particular implementation of that class.

The C++ interfaces are implemented using abstract classes.
A class is made abstract by declaring at least one of its functions as pure
virtual function. A pure virtual function is specified by placing "= 0" in its declaration

The purpose of an abstract class is to provide an appropriate base class
from which other classes can inherit. Abstract classes cannot be used to
instantiate objects and serves only as an interface. Attempting to instantiate
an object of an abstract class causes a compilation error.

Classes that can be used to instantiate objects are called concrete classes.

Designing Strategy
An object-oriented system might use an abstract base class to provide a common
and standardized interface appropriate for all the external applications.
Then, through inheritance from that abstract base class, derived classes
are formed that operate similarly.

The capabilities (i.e., the public functions) offered by the external
applications are provided as pure virtual functions in the abstract base class.
The implementations of these pure virtual functions are provided in the
derived classes that correspond to the specific types of the application.
*/
#include <iostream>

using namespace std;

// Base class
class Shape {
   public:
      // pure virtual function providing interface framework.
      virtual int getArea() = 0;
      void setWidth(int w) {
         width = w;
      }

      void setHeight(int h) {
         height = h;
      }

   protected:
      int width;
      int height;
};

// Derived classes
class Rectangle: public Shape {
   public:
      int getArea() {
         return (width * height);
      }
};

class Triangle: public Shape {
   public:
      int getArea() {
         return (width * height)/2;
      }
};

int main(void) {
   Rectangle Rect;
   Triangle  Tri;

   Rect.setWidth(5);
   Rect.setHeight(7);

   // Print the area of the object.
   cout << "Total Rectangle area: " << Rect.getArea() << endl;

   Tri.setWidth(5);
   Tri.setHeight(7);

   // Print the area of the object.
   cout << "Total Triangle area: " << Tri.getArea() << endl;

   return 0;
}
