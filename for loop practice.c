#include<stdio.h>
int main()
//{int i;
//for(i=0;i<=3;i++)
//{
//    printf("Let me go \n");
//}
//return 0;
//}


//


//{
//    int i;
//    for(i=1;i<=3;i++)
//    {
//        printf("%d \n", i);
//    }
//    printf("Out of loop");
//    return 0;
//}


//{
//    int i;
//    for(i=00;i<=100;i+=1)
//    {
//        printf("%d \n", i);
//
//    }
//    return 0;
//}



// write a for loop which will print the summation of all the numbers which are divided by both 3 and 5 between 30 to 120

{int i, sum = 0;
for(i=30;i<=120;i+=1)
{
    if((i%3==0)&&(i%5==0))
    {
        sum = sum + i;
    }
}
    printf("%d \n", sum);  // as print outside the curly brackets of for it will only print the final value of the sum
    return 0;
}
