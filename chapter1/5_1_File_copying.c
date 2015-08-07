#include <stdio.h>
/*copy input to output*/ // No idea what meaning
main()
{
 int c; 			//nothing fancy just a declaration
 while((c = getchar()) != EOF)	//wait wtf? is this it?
  putchar(c);			//*after testing* wow this is a echo it going to receive 				//each of the chars and put it back... cool 
}				// why can receive more than one char? weird...

