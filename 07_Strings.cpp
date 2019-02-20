#include <iostream>
#include <cstring>
/* Strings are actually one-dimensional array of characters terminated by a null character '\0'. */
/*
    char greeting[6] = {'H', 'e', 'l', 'l', 'o', '\0'};
    char greeting[] = "Hello";
*/
using namespace std;

int main () {

   char str1[10] = "Hello";
   char str2[10] = "World";
   char str3[10];
   int  len ;

   // copy str1 into str3
   strcpy( str3, str1);
   cout << "strcpy( str3, str1) : " << str3 << endl;

   // concatenates str1 and str2
   strcat( str1, str2);
   cout << "strcat( str1, str2): " << str1 << endl;

   // total lenghth of str1 after concatenation
   len = strlen(str1);
   cout << "strlen(str1) : " << len << endl;

   /* void *memcpy(void *str1, const void *str2, size_t n) */
   memcpy( str2, str1, strlen(str1) + 1 );
   cout << "memcpy( str1, str2): " <<  str2 << endl;

   /* strcmp(s1, s2);
   Returns 0 if s1 and s2 are the same;
   less than 0 if s1<s2; greater than 0 if s1>s2. */
   cout << "strcmp( str1, str2 ): " << strcmp( str1, str2 ) << endl;

   /* char *strchr(const char *str, int c)
   Returns a pointer to the first occurrence of character ch in string s1. */
   cout << "strchr( str1, ch ): " <<  strchr( str1, 'l' ) << endl;

   /* char *strstr(const char *s1, const char *s2);
   Returns a pointer to the first occurrence of string s2 in string s1.  */
   cout << "strstr( str1, str2 ): " << strstr( str1, "ld" ) << endl;

   return 0;
}
