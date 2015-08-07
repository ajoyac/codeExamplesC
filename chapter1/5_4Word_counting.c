#include <stdio.h>
#define IN 1 /*inside a word*/    //these 2 like a boolean
#define OUT 0 /*outside a word*/
/*count lines, word and characters in input*/
main()
{
 int c, nl,nw,nc,state;	// I guess state is why we define in & out
 state = OUT; 		//Nailed it!
 nl = nw = nc =0;	//you are 0, you are 0 everybody is assinged 0;
 while ((c = getchar ()) != EOF){
  ++nc;			//it feels funny do it in the other way that im used to.
  if( c=='\n')		//so if enter ad a enter... got it
   nl++;
  if ( c==' ' || c == '\n' || c == '\t') // so ifs not a letter o number is not a word
   state=OUT;
  else if(state == OUT){	//So, if I'm out of a word but its a letter
   state = IN;			//Then im starting a word
   ++nw;
  }
 }
 printf("l:%d w:%d c:%d\n",nl,nw,nc);
}  
