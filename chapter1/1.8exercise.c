#include <stdio.h>
/*count lines in input*/
main()
{
 int c, nl,bl,ta;
 nl=0;
 bl=0;
 ta=0;
 while((c = getchar ()) != EOF)
 {
  if ( c == '\n')// ok this checks if c have an return line "enter" 
   nl++;
  if ( c == ' ')
   bl++;
  if ( c == '\t')
   ta++;
 }
 printf("nl:%d\tbl:%d\tta%d\n", nl,bl,ta);
}

