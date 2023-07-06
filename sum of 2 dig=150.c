#include <stdio.h>
void main()
{
    int a,i,j,b,sum;
    for(i=11;i<=99;i++)
    {
        a=i;
        for(j=11;j<=99;j++)
        {b=j;
        sum =a+b;
            if(sum==150)
            {
                printf("the sum is =%d\n the number is %d + %d = %d",sum,a,b,sum);
            }
        }
}
}
