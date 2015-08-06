#include <stdio.h>
/*Print Fahrenheit-Celcius table
for  fahr from 0 to 300 in 20 at 20*/ 
main ()
{
                        
 int fahr, celsius; 	
 int lower, upper, step;
 lower =-20;  	//modifcation to have almost the same range	
 upper = 150;	
 step = 20;	
 fahr = lower;
		
 printf	("Fahrenheit\tCelsius\n");	//lest use same header
 while(celsius <= upper ) 		//now use celsius as validator
 {				
  fahr = celsius * 1.8 +32; 		//Remeber ORDER OF OPERATIONS EVER!
  printf("%d\t\t%d\n",fahr,celsius); 	
  celsius += step; 			//now we increase celsius wit style
 }			
} 
