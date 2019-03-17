/*

*/
#include <iostream>
using namespace std;
#define DEBUG

#define MIN(a,b) (((a)<(b)) ? a : b)
#define MKSTR( x ) #x
/* The # operator causes a replacement-text token to be converted to a string surrounded by quotes. */
#define CONCAT(a, b) a ## b
/* The ## operator is used to concatenate two tokens.  */

int main () {
   int i, j;

   i = 100;
   j = 30;

//Conditional compilation
#ifdef DEBUG
   cerr <<"Trace: Inside main function" << endl;
#endif

#if 0
   /* This is commented part */
   cout << MKSTR(HELLO C++) << endl;
#endif

   cout <<"The minimum is " << MIN(i, j) << endl;

#ifdef DEBUG
   cerr <<"Trace: Coming out of main function" << endl;
#endif

    cout << MKSTR(HELLO C++) << endl;

    int xy = 100;
    cout << CONCAT(x, y) << endl;

    cout << "Value of __LINE__ : " << __LINE__ << endl;
    cout << "Value of __FILE__ : " << __FILE__ << endl;
    cout << "Value of __DATE__ : " << __DATE__ << endl;
    cout << "Value of __TIME__ : " << __TIME__ << endl;

   return 0;
}
