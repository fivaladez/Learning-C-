/*
References are often confused with pointers but three major differences
between references and pointers are:
    - You cannot have NULL references. You must always be able to assume that
    a reference is connected to a legitimate piece of storage.

    - Once a reference is initialized to an object, it cannot be changed to refer to another object.
    Pointers can be pointed to another object at any time.

    - A reference must be initialized when it is created. Pointers can be initialized at any time.
*/
#include <iostream>

using namespace std;

// function declaration
void swap(int& x, int& y);

double vals[] = {10.1, 12.6, 33.1, 24.1, 50.0};

double& setValues( int i ) {
   return vals[i];   // return a reference to the ith element
}

int main () {
    // declare simple variables
    int    i;
    double d;

    // declare reference variables
    int&    r = i;
    double& s = d;

    i = 5;
    cout << "Value of i : " << i << endl;
    cout << "Value of i reference : " << r  << endl;

    d = 11.7;
    cout << "Value of d : " << d << endl;
    cout << "Value of d reference : " << s  << endl;
/* ====================================================== */
    // local variable declaration:
    int a = 100;
    int b = 200;

    cout << "Before swap, value of a :" << a << endl;
    cout << "Before swap, value of b :" << b << endl;

    /* calling a function to swap the values.*/
    swap(a, b);

    cout << "After swap, value of a :" << a << endl;
    cout << "After swap, value of b :" << b << endl;
/* ====================================================== */

    cout << "Value before change" << endl;
    for ( int i = 0; i < 5; i++ ) {
       cout << "vals[" << i << "] = ";
       cout << vals[i] << endl;
    }

    setValues(1) = 20.23; // change 2nd element
    setValues(3) = 70.8;  // change 4th element

    cout << "Value after change" << endl;
    for ( int i = 0; i < 5; i++ ) {
       cout << "vals[" << i << "] = ";
       cout << vals[i] << endl;
    }

    /* When returning a reference, be careful that the object being referred to does not go out of
    scope. So it is not legal to return a reference to local var.
    But you can always return a reference on a static variable. 
    */
    return 0;
}

// function definition to swap the values.
void swap(int& x, int& y) {

   int temp;
   temp = x; /* save the value at address x */
   x = y;    /* put y into x */
   y = temp; /* put x into y */

   return;
}
