#include <iostream>
using namespace std;

#include <iomanip>
using std::setw;

/*Declaration of functions*/
void myFunction1( int* param, int size );
void myFunction2( int param[5] );
void myFunction3( int param[], int size );

int * myFunction();

int main ()
{

    int n[ 10 ] = {1,2,3,4,5,6,7,8,9,10}; // n is an array of 10 integers

    // an array with 5 rows and 2 columns.
    int a[5][2] = {
        {0,0},
        {1,2},
        {2,4},
        {3,6},
        {4,8}
    };
    int i, j;

    cout << "Element" << setw( 13 ) << "Value" << endl;

    // output each array element's value
    for ( j = 0; j < 10; j++ ) {
       cout << setw( 7 )<< j << setw( 13 ) << n[ j ] << endl;
   }//setw() it is for spaces

    // output each array element's value
    for ( i = 0; i < 5; i++ ){
       for ( j = 0; j < 2; j++ ) {

          cout << "a[" << i << "][" << j << "]: ";
          cout << a[i][j]<< endl;
       }
    }
    /* === Passing Arrays as function parameters === */
    /*
        There are 3 ways:
        - As a pointer:     void myFunction(int *param, int size){}
        - As sized array:   void myFunction(int param[5]){}
        - As unsized array: void myFunction(int param[], int size){}
    */

    myFunction1( &n[0], 10 );
    myFunction2( n );
    myFunction3( n , 10);

    int *p;
    p = myFunction();
    for ( i = 0; i < 3; i++ ) {
         cout << "*(p + " <<  i << ") : " <<  *(p + i) << endl;
    }

    return 0;
}

/*Definition of functions*/
void myFunction1( int* param, int size ){
    int i;
    for( i = 0; size > i; i++ ){
        cout << "    In function 1 the array[" << i << "] is " << *(param + i) << endl;
    }
    cout << "    =====    \n" << endl;
}
void myFunction2( int param[5] ){
    int i;
    for( i = 0; 5 > i; i++ ){
        cout << "    In function 2 the array[" << i << "] is " << param[i] << endl;
    }
    cout << "    =====    \n" << endl;
}
void myFunction3( int param[], int size ){
    int i;
    for( i = 0; size > i; i++ ){
        cout << "    In function 3 the array[" << i << "] is " << param[i] << endl;
    }
    cout << "    =====    \n" << endl;
}
int * myFunction() {
    static int myArrayReturn[3] = {5,7,9};
    return myArrayReturn;/*Returns the memory direction of the array*/
}
