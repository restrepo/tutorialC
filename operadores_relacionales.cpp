#include <iostream>
#include <stdio.h>
#include <stdlib.h>
 
using namespace std;
 
int main(int argc, char *argv[])
{
  bool c;
 
  cout << "el valor 0 equivale a FALSE, y 1 a TRUE" << endl ;
 
  if(argc != 3)
    {
      fprintf(stdout,"Ingreso %d argumentos, el número de argumentos es 2\n",argc);
      return 1;
    }//endif
 
  int a = atoi(argv[1]);
  int b = atoi(argv[2]);
 
  cout << "a=" << a << endl;
  cout << "b=" << b << endl;
 
 
  c = (a == b);
  cout << "a == b es:" << c << endl ;
 
  c= ( a < b );
  cout << "a < b es:"<< c << endl ;
 
  c= ( a > b );
  cout << "a > b es:"<< c << endl ;
 
  c= ( a <= b );
  cout << "a <= b es:"<< c << endl ;
 
  c= ( b >= a );
  cout << "b >= a es:"<< c << endl ;
 
  return 0;
}