#include <stdio.h>

main()
{
 int c;
 int b=0;	//finally understand how getchar works
 while((c=getchar())!=EOF){ 	// it send one char by one of the inpunt and 
  if (c ==' ') 			// it will buffer the rest until the next \n
   b++;				
  else				//here I'm just looking if already have put a blanck 
   b=0;				//and ultil another char comes
  if(b<2)
   putchar(c);
 }
}
 
