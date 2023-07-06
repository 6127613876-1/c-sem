#include<stdio.h>
void main()
{
    int n,n1,sum,start,stop;
    scanf("%d",&start);
    scanf("%d",&stop);
    for(n=start;n<stop;n++)
    {
        sum=0;
        n1=n;
        while (n1>0)
        {
            sum=sum*10+(n1%10);
            n1=n1/10;
        }
        if (n==sum)
        {
            printf("%d\n",sum);
        }
    }
}