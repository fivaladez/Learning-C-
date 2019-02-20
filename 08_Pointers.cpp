#include <iostream>

using namespace std;

int main () {
    int  var = 20;   // actual variable declaration.
    int  *ip;        // pointer variable

    ip = &var;       // store address of var in pointer variable

    cout << "Value of var variable: ";
    cout << var << endl;

    // print the address stored in ip pointer variable
    cout << "Address stored in ip variable: ";
    cout << ip << endl;

    // access the value at the address available in pointer
    cout << "Value of *ip variable: ";
    cout << *ip << endl;

    int  *ptr = NULL;
    cout << "The value of ptr is " << ptr ;
    /* if(ptr)     // succeeds if p is not null
       if(!ptr)    // succeeds if p is null */

    int  **pptr;
    var = 3000;
    // take the address of var
    ptr = &var;
    // take the address of ptr using address of operator &
    pptr = &ptr;
    // take the value using pptr
    cout << "Value of var :" << var << endl;
    cout << "Value available at *ptr :" << *ptr << endl;
    cout << "Value available at **pptr :" << **pptr << endl;

    int *ptr_a[3];
    int a[3] = {1,2,3};

    for ( int i = 0; i < 3; i++) {
       ptr_a[i] = &a[i]; /* assign the address of integer. */
    }

    for ( int i = 0; i < 3; i++) {
       cout << "Value of var[" << i << "] is: " << *ptr_a[i] << endl;
    }

    return 0;
}
