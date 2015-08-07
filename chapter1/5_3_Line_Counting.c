#include <stdio.h>
/*count lines in input*/
main()
{
 int c, nl;
 nl=0;
 while((c = getchar ()) != EOF)
  if ( c == '\n')// ok this checks if c have an return line "enter" 
   nl++;
 printf("%d\n", nl);
}

