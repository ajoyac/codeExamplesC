#include <stdio.h>
/* Count characters in input; fist version */
main()
{
 long nc; // this is new is another type for number for really big numbers
 nc=0;
 while(getchar()!=EOF)	//notice im not using brackets here, there is a reason... 
  nc++;	// also this is a best representation of nc =  
      	//nc + 1 also working ++nc but are diferents so becaurful
 printf("%ld\n", nc);
}//meh this is also represented with a for.. but meh it works the same.
