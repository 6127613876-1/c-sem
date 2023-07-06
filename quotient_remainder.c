#include<stdio.h>
void div();
void main()
{
    div();
}
void div()
{
    int a,b,quo,rem;
    printf("Enter an first number:");
    scanf("%d",&a);
    printf("Enter an second number:");
    scanf("%d",&b);
    quo=a/b;
    rem=a%b;
    printf("The quotient is %d \n",quo);
    printf("The reminder is %d",rem);
}