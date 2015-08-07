#include <stdio.h>
/*print Fahrenheit-Ceslsius table*/
#define LOWER 0
#define TOP 300
#define STEP 20

main(){
 int fahr;
 for(fahr =LOWER;fahr<=TOP; fahr+=STEP)	
 {					
  printf("%3d %6.1f\n",fahr,(fahr-32)/1.8); 	//I should made the same with this... 
 }					   	//but to lazy to figure what means
}
