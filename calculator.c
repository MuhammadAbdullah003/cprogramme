#include<stdio.h>
int main()
{
    char operate;
    double num1,num2,result;
    printf("Enter your operator : ");
    scanf("%c", &operate);
    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2);


    switch(operate)
    {

        case '+':
             result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if(num2!=0)
            {
               result = num1 / num2;

            }
            else
            {
                printf("Invalid \n");
            }

            break;
        default:
            printf("The result is invalid \n");
            return 0;


    }
    printf("Result is %.2lf \n", result);
    return 0;
}
