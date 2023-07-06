#include <stdio.h>
void main()
{
    int n,i,j,sum=0;
    for(i=10;i<=99;i++)
    {
        for(j=10;j<=99;j++)
        {
           sum=i+j;
           if (sum==150)
           {
            printf("%d+%d=%d\n",i,j,sum);
           }
           
        }
    }    
}