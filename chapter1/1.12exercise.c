#include <stdio.h>
#define IN 1 /*inside a word*/ 
#define OUT 0 /*outside a word*/
main()
{
 int c,state; //almost the same that the counts just a simple remplace and erease	
 state = IN; // some unecesary lines
 while ((c = getchar ()) != EOF){ 	//still the same
  if (c=='\n' ||  c==' ' || c == '\t')  //still the same
   state=OUT;
  else if(state == OUT){		//HERE, instead of counting just hit enter!
   state = IN;	
   printf("\n"); 
  }
  putchar(c);
 }
}
