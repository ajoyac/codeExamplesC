#include <stdio.h>
/*Print Fahrenheit-Celcius table
for  fahr from 0 to 300 in 20 at 20*/ 
main ()
{
                        
 int fahr, celsius; 	
 int lower, upper, step;
 lower = 0;  	
 upper = 300;	
 step = 20;	
 fahr = lower;
		
 printf	("Fahrenheit\tCelsius\n");//Header passing trough
 while(fahr <= upper ) 	
 {				//notice read exactly the name of variables are case-sensitivy
  celsius = (fahr-32) / 1.8; 	
  printf("%d\t\t%d\n",fahr,celsius); 	//Add it a second tab to have more space and look good
					//with the Header
  fahr = fahr + step; 	
 }			
} 
