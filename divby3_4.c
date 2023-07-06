#include<stdio.h>
void main()
{
    int i,a,b;
    scanf("%d",&a);
    scanf("%d",&b);
    for(i=a;i<b;i=i+12)
    {
        printf("%d\n",i);
        continue;
    }
}