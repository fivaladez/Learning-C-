#include <iostream>
using namespace std;

/* NOTE: See that you can let an initial value in the parameters of a function.
That´s something that you can not in C*/
int sum(int a, int b = 20) {
    int result = 0;
    result = a + b;

    return (result);
}
int main () {
    // local variable declaration:
    int a = 100;
    int b = 200;
    int result;

    // calling a function to add the values.
    result = sum(a, b);
    cout << "Total value is :" << result << endl;

    // calling a function again as follows.
    result = sum(a);
    cout << "Total value is :" << result << endl;

    return 0;
}
