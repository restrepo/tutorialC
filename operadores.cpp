#include <iostream>
using namespace std;
 
int main()
{
   int a = 21;
   int b = 10;
   int c ;
 
   cout << "a=" << a << endl ;
   cout << "b=" << b << endl ;
   c = a + b;
   cout << "a+b=" << c << endl ;
   c = a - b;
   cout << "a-b=" << c << endl ;
   c = a * b;
   cout << "a*b=" << c << endl ;
   c = a / b;
   cout << "a/b=" << c << endl ;
   c = a % b;
   cout << "a%b=" << c << endl ;
   a++; 
   cout << "a++=" << a << endl ;
   a--; 
   cout << "a--=" << a << endl ;

   return 0;
}