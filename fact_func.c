#include <stdio.h>
void fact();
void main()
{
    fact();
}
void fact()
{
    int n,i,fact;
    printf("Enter an number:");
    scanf("%d",&n);
    fact=1;
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    printf("Factorial of the given number is %d",fact);
}
