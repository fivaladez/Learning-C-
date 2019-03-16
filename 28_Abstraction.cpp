/*
Data abstraction refers to providing only essential information to the outside
world and hiding their background details, i.e., to represent the needed
information in program without presenting the details.

Data abstraction is a programming (and design) technique that relies on
the separation of interface and implementation.

n C++, classes provides great level of data abstraction. They provide
sufficient public methods to the outside world to play with the
functionality of the object and to manipulate object data, i.e., state
without actually knowing how class has been implemented internally.

Access Labels Enforce Abstraction
In C++, we use access labels to define the abstract interface to the class.
A class may contain zero or more access labels.

Benefits of Data Abstraction
Data abstraction provides two important advantages:
    - Class internals are protected from inadvertent user-level errors,
     which might corrupt the state of the object.
    - The class implementation may evolve over time in response to changing
     requirements or bug reports without requiring change in user-level code.

Designing Strategy
Abstraction separates code into interface and implementation. So while designing
 your component, you must keep interface independent of the implementation
 so that if you change underlying implementation then interface would remain intact.

*/
#include <iostream>
using namespace std;

class Adder {
   public:
      // constructor
      Adder(int i = 0) {
         total = i;
      }

      // interface to outside world
      void addNum(int number) {
         total += number;
      }

      // interface to outside world
      int getTotal() {
         return total;
      };

   private:
      // hidden data from outside world
      int total;
};

int main() {
   Adder a;

   a.addNum(10);
   a.addNum(20);
   a.addNum(30);

   cout << "Total " << a.getTotal() <<endl;
   return 0;
}
