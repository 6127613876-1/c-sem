#include <stdio.h>
void main()
{
    int x,y,n,z=0,i,sum=0;
    x=0;
    y=1;
    n=5;
    for(i=0;i<n;i++)
    {
        z=x+y;
        x=y;
        y=z;
        sum=sum+z;
    }
    printf("%d",sum);
}