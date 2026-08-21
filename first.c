#include <stdio.h>
int main ()
{
  char a[6] = {'a','b','c','b','d','a'};
  int i,j, found = 0;
   for(i = 0; i<6;i++){
    for(j=i+1;j<6;j++){
       if(a[i] == a[j]){
         printf("First repeated character = %c", a[i]);
         return 0;
         }
      }
   }
      printf("No repeated character");
  return 0;
 
 }
  
   
   
       
