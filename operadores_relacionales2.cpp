#include <iostream>
#include <stdio.h>
#include <stdlib.h>
 
using namespace std;
 
main(int argc, char *argv[])
{
  if(argc != 3)
    {
      fprintf(stdout,"Ingreso %d argumentos, el número de argumentos es 2\n",argc);
      return 1;
    }//endif
 
  bool a = atoi(argv[1]); /*si es diferente de cero es uno*/
  bool b = atoi(argv[2]);
 
  cout << "a=" << a<< endl;
  cout << "b=" << b<< endl;
 
  if ( a && b )
    {
      cout << "a && b es TRUE" << endl; 
    }else
    {
      cout << "a && b es FALSE" << endl;
    }
   if ( a || b )
    {
      cout << "a || b es TRUE" << endl; 
    }else
    {
      cout << "a || b es FALSE" << endl;
    }
  if ( !(a && b) )
    {
      cout << "!(a && b) es TRUE" << endl; 
    }else
    {
      cout << "!(a && b) es FALSE" << endl;
    }
  if ( !(a || b) )
    {
      cout << "!(a || b) es TRUE" << endl; 
    }else
    {
      cout << "!(a || b) es FALSE" << endl;
    }
 
  return 0;
}