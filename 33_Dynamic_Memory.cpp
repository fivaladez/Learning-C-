/*
The stack − All variables declared inside the function will take up memory
            from the stack.
The heap  − This is unused memory of the program and can be used to allocate
            the memory dynamically when program runs.

Many times, you are not aware in advance how much memory you will need to store
particular information in a defined variable and the size of required memory
can be determined at run time.

You can allocate memory at run time within the heap for the variable of a
given type using a special operator in C++ which returns the address of the
space allocated. This operator is called new operator.

If you are not in need of dynamically allocated memory anymore, you can
use delete operator, which de-allocates memory that was previously
allocated by new operator.

new data-type;
delete pvalue;        // Release memory pointed to by pvalue

The malloc() function from C, still exists in C++, but it is recommended
to avoid using malloc() function. The main advantage of new over malloc() is that
 new doesn't just allocate memory, it constructs objects which is prime purpose of C++.
*/
#include <iostream>
using namespace std;

class Box {
   public:
      Box() {
         cout << "Constructor called!" <<endl;
      }
      ~Box() {
         cout << "Destructor called!" <<endl;
      }
};

int main () {
   double* pvalue  = NULL; // Pointer initialized with null
   pvalue  = new double;   // Request memory for the variable

   *pvalue = 29494.99;     // Store value at allocated address
   cout << "Value of pvalue : " << *pvalue << endl;

   delete pvalue;         // free up the memory.

   char* pvalue2  = NULL;         // Pointer initialized with null
   pvalue2  = new char[20];       // Request memory for the variable
   delete [] pvalue2;             // Delete array pointed to by pvalue

   Box* myBoxArray = new Box[4];
   delete [] myBoxArray; // Delete array


   return 0;
}
