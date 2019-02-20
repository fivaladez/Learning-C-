#include <iostream>

using namespace std;

int main() {
   char str[] = "Hello C++";
   cout << "Value of str is : " << str << endl;

   char name[50];
   int age;
   cout << "\nPlease enter your name and age: ";
   cin >> name >> age;
   cout << "\nYour name and age are " << name << " " << age << endl;

   char str2[] = "Unable to read....";
   cerr << "Error message : " << str2 << endl;

   char str3[] = "Unable to read....";
   clog << "Error message : " << str3 << endl;

   return 0;
}
