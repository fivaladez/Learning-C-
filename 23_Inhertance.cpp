/*
Inheritance allows us to define a class in terms of another class, which
makes it easier to create and maintain an application. This also provides
an opportunity to reuse the code functionality and fast implementation time.

When creating a class, instead of writing completely new data members
and member functions, the programmer can designate that the new class
should inherit the members of an existing class. This existing class is
called the base class, and the new class is referred to as the derived class.

class derived-class: access-specifier base-class

A derived class can access all the non-private members of its base class.
Thus base-class members that should not be accessible to the member functions
 of derived classes should be declared private in the base class.

A derived class inherits all base class methods with the following exceptions:

    - Constructors, destructors and copy constructors of the base class.
    - Overloaded operators of the base class.
    - The friend functions of the base class.
*/
#include <iostream>

using namespace std;

// Base class
class Shape {
   public:
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

// Derived class
class Rectangle: public Shape {
   public:
      int getArea() {
         return (width * height);
      }
};

int main(void) {
   Rectangle Rect;
   //We can use members from base class
   Rect.setWidth(5);
   Rect.setHeight(7);

   // Print the area of the object.
   cout << "Total area: " << Rect.getArea() << endl;

   return 0;
}
