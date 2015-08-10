#include <stdio.h>
#define IN 1
#define OUT 0
#define LIMIT 10
 
main (){
 int c,state,i,j,wsize;
 int index[LIMIT];
 
 for(i=0;i<LIMIT;i++)
  index[i]=0;
 
 state = IN;
 wsize=0;
 while((c=getchar())!=EOF){
  if(c=='\t' || c == ' ' || c == '\n'){
   index[wsize]++;
   state=OUT;
   wsize=0;
  }
  else if (state==OUT){
   state=IN;
   wsize++;
  }
  else{
   wsize++;
  }
 }
 for(i=1;i<LIMIT;i++){
  printf("%2d|",i,index[i]);
  for(j=1;j<=index[i];j++)
   printf("x");
  printf("\n");
 }
} 