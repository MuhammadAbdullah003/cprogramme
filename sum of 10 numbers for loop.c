#include<stdio.h>
int main ()
{
    int i,a,sum;
    sum = 0;
    for(i=0;i<10;i+=1) // i is a loop counter

    {
        printf("Enter a number : ");
        scanf("%d", &a);
        sum +=a;

    }
    printf("The total sum is %d \n", sum);
    return 0;
}

