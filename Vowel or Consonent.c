#include<stdio.h>
int main()
{
    char alphabet;
    printf("Enter your character: ");
    scanf("%c", &alphabet);
    if(alphabet>= 'a' && alphabet>='b')
    {
        if(alphabet=='a'||alphabet=='e'||alphabet=='i'||alphabet=='o'||alphabet=='u')
        {
            printf("It is a vowel");
        }
        else
        {
            printf("It is not a vowel");
        }
    }
    else{
        printf("It is a vowel");
    }
    return 0;
}
