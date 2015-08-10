#include <stdio.h>
#define LIMIT 26
 
main (){
 int c,i,j;
 int index[LIMIT];
 
 for(i=0;i<LIMIT;i++)
  index[i]=0;

 while((c=getchar())!=EOF){
  if(c>='a' && c<='z')
   index[c-'a']++;
 }
 for(i='a';i<LIMIT+'a';i++){
  printf("%c|",i);
  //printf("%c|%d",i,index[i-'a']);
  for(j=1;j<=index[i-'a'];j++)
   printf("x");
  printf("\n");
 }
} 