#include <stdio.h>
int main()
{
    int a[8] ={2,5,6,2,4,5,9,3};
    int i,j,count, most,max =0;
     for (i = 0; i<8; i++){
        count =0;
        for (j = 0; j<8 ;j++){
            if(a[i] == a[j])
            count++;
        }
        if(count >max){
            max = count ;
            most =a[i];
        }
     }
 printf("Most repeated number = %d", most);
       return 0;
}