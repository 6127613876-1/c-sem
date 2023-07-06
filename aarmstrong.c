#include<stdio.h>
#include<math.h>
void main()
{
    int n1,fact=0,n,rem,i=0;
    scanf("%d",&n);
    n1=n;
        for(n1=n;n1!=0;i++)
        {
            n1/=10;
        }
        for(n1=n;n1!=0;n1/=10)
        {
            rem=n1%10;
            fact+=pow(rem,i);
        }
    printf("%d",fact);
}