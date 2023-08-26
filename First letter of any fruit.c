#include<stdio.h>
int main ()
{
    char fruit;
    printf("Enter the first letter of the fruit: ");
    scanf("%c", &fruit);
    switch (fruit)
    {
    case 'm':
        printf("Mangoes - 250 taka per kg \n");
        break;

        case 'b':
        printf("Banana - 180 taka per kg \n");
        break;

        case 'c':
        printf("Cherry - 250 taka per kg \n");
        break;

        default :
            printf("Invalid input!\n");
            return 0;
    }
}
