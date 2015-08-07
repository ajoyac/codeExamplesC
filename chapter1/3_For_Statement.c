#include <stdio.h>
/*print Fahrenheit-Ceslsius table*/
main(){
 int fahr;
 for(fahr =0;fahr<=300; fahr+=20)	//bye bye vairables since is not
 {					// changing we don't need them
  printf("%3d %6.1f\n",fahr,(fahr-32)/1.8); //even the operation is done here
 }
}
