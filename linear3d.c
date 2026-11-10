#include<stdio.h>
int main(){
int n ,key, arr[5][5][5] = {{2,3,4,5,6},{1,9,8,10,11},{12,15,16,18,13}};
int found = 0;
printf("Enter a key:");
scanf("%d",&key);
for (int i= 0; i<5;i++)
for (int j = 0; j<5; j++)
for(int k = 0; k<5; k++){
if (arr[i][j][k] == key){
printf("Found in array[%d][%d][%d]", i,j,k);
found = 1;}}
if(!found)
printf("not found");
return 0;
}

