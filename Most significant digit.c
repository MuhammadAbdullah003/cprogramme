#include <stdio.h>
int main ()
{
    int n,val;
    printf("Enter your number : ");
    scanf(" %d", &n);
    while(n)
    {
        val = n%10;
        n/=10;

    }
    printf(" %d",val);
    return 0;
}
