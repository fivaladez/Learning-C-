/*
polymorphism occurs when there is a hierarchy of classes and they are related by inheritance.
C++ polymorphism means that a call to a member function will cause a different
 function to be executed depending on the type of object that invokes the function.

Virtual Function:
    A virtual function is a function in a base class that is declared using the
    keyword virtual. Defining in a base class a virtual function, with another
    version in a derived class, signals to the compiler that we don't want
    static linkage for this function.

    What we do want is the selection of the function to be called at any given
    point in the program to be based on the kind of object for which it is called.
    This sort of operation is referred to as dynamic linkage, or late binding.

Pure Virtual Function:
    It is possible that you want to include a virtual function in a base class
    so that it may be redefined in a derived class to suit the objects of
    that class, but that there is no meaningful definition you could give
    for the function in the base class.
*/
#include <iostream>
using namespace std;

class Shape {
   protected:
      int width, height;

   public:
      Shape( int a = 0, int b = 0){
         width = a;
         height = b;
      }
      //int area() { static linkage
      virtual int area(){ // dynamic linkage -> Virtual Function
      //virtual int area() = 0  -> Pure Virtual function
         cout << "Parent class area :" <<endl;
         return 0;
      }
};
class Rectangle: public Shape {
   public:
      Rectangle( int a = 0, int b = 0):Shape(a, b) { }

      int area () {
         cout << "Rectangle class area :" <<endl;
         return (width * height);
      }
};

class Triangle: public Shape {
   public:
      Triangle( int a = 0, int b = 0):Shape(a, b) { }

      int area () {
         cout << "Triangle class area :" <<endl;
         return (width * height / 2);
      }
};

// Main function for the program
int main() {
   Shape *shape;
   Rectangle rec(10,7);
   Triangle  tri(10,5);

   // store the address of Rectangle
   shape = &rec;

   // call rectangle area.
   shape->area();

   // store the address of Triangle
   shape = &tri;

   // call triangle area.
   shape->area();

   return 0;
}
