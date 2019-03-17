/*
Using namespace, you can define the context in which names are defined.
In essence, a namespace defines a scope.

Discontiguous Namespaces
A namespace can be defined in several parts and so a namespace is made up of
the sum of its separately defined parts. The separate parts of a namespace
can be spread over multiple files.

Nested Namespaces
Namespaces can be nested where you can define one namespace inside another name space
*/
#include <iostream>
using namespace std;

// first name space
namespace first_space {
   void func() {
      cout << "Inside first_space" << endl;
   }
   // second name space
   namespace first_space_2 {
      void func() {
         cout << "Inside first_space_2" << endl;
      }
   }
}

// second name space
namespace second_space {
   void func() {
      cout << "Inside second_space" << endl;
   }
}

// third name space
namespace third_space {
   void func() {
      cout << "Inside third_space" << endl;
   }
}

using namespace third_space;

int main () {
   // Calls function from first name space.
   first_space::func();

   // Calls function from second name space.
   second_space::func();

   // Calls function from third name space.
   func();

   // Calls function from nested first name space
   first_space::first_space_2::func();

   return 0;
}
