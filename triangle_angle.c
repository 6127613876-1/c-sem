#include <stdio.h>
void angle();
void main()
{
    angle();
     angle();
}
void angle()
{
    int num1,num2,num3;
    printf("\nEnter an number 1:");
    scanf("%d",&num1);
    printf("\nEnter an number 2:");
    scanf("%d",&num2);
    printf("\nEnter an number 3:");
    scanf("%d",&num3);

    if (num1+num2+num3==180)
    {
        printf(" a triangle can be formed by given values of the three angles ");
    }

    else
    {
        printf(" a triangle cannot be formed by given values of the three angles ");
    }

}