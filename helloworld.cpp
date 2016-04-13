#include <iostream>
using namespace std;
 
// This is a tradition
 
int main() /* you can comment like this to*/
{
   cout << "Hello World\n"; // Print 'Hello Word' 
   return 0;
}
 
/* The general form is:
 * int main (int argc, char *argv[] , other_parameters ) { body }
 * argc -    Non-negative value representing the number of arguments passed 
 *           to the program from the environment in which the program is run.
 * argv -    Pointer to the first element of an array of pointers to 
 *           null-terminated multibyte strings that represent the arguments
 *           passed to the program from the execution environment (argv[0] 
 *           through argv[argc-1]). The value of argv[argc] is guaranteed to be 0.
 * body -    The body of the main function  
 *   
 */