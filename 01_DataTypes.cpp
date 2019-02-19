#include <iostream>
using namespace std;

/*
NOTE: function main has to return int, it is not optional as in C
*/
int main() {
    cout << "\n\n    Size of char : " << sizeof(char) << endl;
    cout << "\n    Size of int : " << sizeof(int) << endl;
    cout << "\n    Size of short int : " << sizeof(short int) << endl;
    cout << "\n    Size of long int : " << sizeof(long int) << endl;
    cout << "\n    Size of float : " << sizeof(float) << endl;
    cout << "\n    Size of double : " << sizeof(double) << endl;
    cout << "\n    Size of wchar_t : " << sizeof(wchar_t) << endl;
    cout << "\n    Size of bool : " << sizeof(bool) << endl;/* Only True or False*/

    typedef int feet;
    feet distance;

    enum color { red, green = 5, blue } c;
    c = blue;

    return 0;
}
