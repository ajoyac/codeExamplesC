#include <stdio.h>
/*print Fahrenheit-Ceslsius table*/
main(){
 int fahr;
 for(fahr =300;fahr>=0; fahr-=20)	//is the same but reversed coool!
 {					
  printf("%3d %6.1f\n",fahr,(fahr-32)/1.8); //notices f to have decimal!
 }
}
