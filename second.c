#include<stdio.h>
int main()
{
int a[5] = {16,25,9,40,80};
int i, largest , second;

largest = a[0];
second  = a[0];

for (i= 1;i<5;i++)
{
 if(a[1]>largest)
 {
   second = largest;
   largest = a[i];
   }
   else if(a[i]>second && a[i]!= largest)
   {
     second = a[i];
     }
   }
   
   printf("Second largest = %d",second);
   
   return 0;
 }
