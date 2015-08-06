#include <stdio.h>
/*Print Fahrenheit-Celcius table
for  fahr from 0 to 300 in 20 at 20*/ 
//NOTE: /*this is other type of comment*/ 
//= onle line coment /* multple lines comments */
main ()
{
                        // This is called Declaration! 
 int fahr, celsius; 	// first type of function then name of variable
 int lower, upper, step;// some say you should always declared your variables at the top 
 lower = 0;  	// This is caled Definition
 upper = 300;	// (This is SPARTA) Actually the definiton 
 step = 20;	// is set a value on your variable
 fahr = lower;
			// This is a loop condition 
 while(fahr <= upper ) 	// it would be read as "while 'fahr' is less or equals 'upper'
 {			// keep repeting this code(like in a game you
  			// keep repeting until you succed in the stage... )
  celsius = (fahr-32) / 1.8; 	//you can do simple operations like in a calculator 
  printf("%d\t%d\n",fahr,celsius); //follow up http://planetmath.org/orderofoperations 
  //NOTE: %d to print interger value exist other... \t a tab \n a enter
  fahr = fahr + step; 	//this makes fahr goes up.. if you don't do it you would be in
 }			//infinit loop  ( like keep repeting keep repting ) 
} 
