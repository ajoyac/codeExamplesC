#include <stdio.h>
//finally got it so here is the answer
main()
{
 int c;
 while(( c= getchar()) != EOF)
  printf("%d\n", (getchar()!= EOF)); //if c is something it going to print a 1
}
