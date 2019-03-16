/*
All C++ programs are composed of the following two fundamental elements:

    - Program statements (code) − This is the part of a program that
    performs actions and they are called functions.

    - Program data − The data is the information of the program which
    gets affected by the program functions.

Encapsulation is an Object Oriented Programming concept that binds together
the data and functions that manipulate the data, and that keeps both safe
from outside interference and misuse. Data encapsulation led to the
important OOP concept of data hiding.

Data encapsulation is a mechanism of bundling the data, and the functions
that use them and data abstraction is a mechanism of exposing only the
interfaces and hiding the implementation details from the user.

Any C++ program where you implement a class with public and private
members is an example of data encapsulation and data abstraction.

Designing Strategy
Most of us have learnt to make class members private by default unless
we really need to expose them. That's just good encapsulation.
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
