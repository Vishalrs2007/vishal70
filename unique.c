 #include <stdio.h>
int main()
{
    int a[8]= {1,2,5,2,4,1,3,6};
    int i,j,count;

    printf("Unique elements :");

    for (i = 0; i<8; i++){
        count= 0;

        for (j=0; j<8;j++){
            if(a[i] == a[j])
            count++;

        }
        if(count == 1)
        printf("%d ", a[i]);
    }
       return 0;
}