//#include<stdio.h>
//int main()
//{
//    int a,i,sum;
//    sum=0;
//    i=0;
//    while(i<10)
//    {
//        printf("Enter a number : ");
//        scanf("%d", &a);
//        sum = sum +a ;
//        i++;
//    }
//    return 0;
//}

    #include <stdio.h>
int main()
{
    int a, sum = 0;
    printf("Enter a number: ");
    scanf("%d",&a);
    sum += a;
    while(a != 100)
    {
        printf("Enter a number: ");
        scanf("%d",&a);
	    sum += a;
    }
    printf("%d",sum);
    return 0;
}


