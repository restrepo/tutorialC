#include <iostream>     /*cin,cout*/
#include <stdio.h>      /*fprintf */
#include <stdlib.h>     /* strtol */
#include <string.h>     /* strcat */
 
using namespace std;
 
/*Creamos una función para convertir los numeros a su forma binaria*/
 
const char *byte_to_binary(int x)
{
    static char b[64];
    b[0] = '\0';
 
    int z;
    for (z = 1024; z > 0; z >>= 1)
      {				  
      if ((x & z) == z)		  
        strcat(b,"1");
      else
	strcat(b,"0");
    }
 
    return b;
}
 
int main(int argc, char *argv[])
{
  if(argc != 3)
    {
      cout << "Ingreso" << argc << "argumentos, el número de argumentos es 2"<< endl;
      return 1;
    }//endif
 
  int a = atoi(argv[1]); 
  int b = atoi(argv[2]);
  int c;
 
  if((a>=1024| b>=1024))
    {
      cout << "Alguno de los argumentos,es mayor que 1024"<< endl;
      return 1;
    }//endif
 
 
  printf ("a= %d\n",a);
  printf ("binario: a= %s\n",byte_to_binary(a));
  printf ("b= %d\n",b);
  printf ("binario b=: %s\n",byte_to_binary(b));
 
  c = a & b;
  printf ("a & b= %d\n",c);
  printf ("binario a & b=: %s\n",byte_to_binary(c));
 
 
  c = a | b;             
  printf ("a | b= %d\n",c);
  printf ("binario a | b=: %s\n",byte_to_binary(c));
 
  c = a ^ b;
  printf ("a ^ b= %d\n",c);
  printf ("binario a ^ b=: %s\n",byte_to_binary(c));
 
  c = ~a;               
  printf ("~a= %d\n",c);
  printf ("binario ~a=: %s\n",byte_to_binary(c)); 
 
  c = a << 2;            
  printf ("a << 2= %d\n",c);
  printf ("binario a << 2=: %s\n",byte_to_binary(c));
 
  c = a >> 2;
  printf ("a >> 2= %d\n",c);
  printf ("binario a >> 2=: %s\n",byte_to_binary(c));
 
  return 0;
}