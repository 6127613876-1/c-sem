#include<stdio.h>
void main()
{
    int n,n1,rem,i,sum;
    scanf("%d",&n);
    for(i=100;i<n;i++)
    {
        n1=i;
        sum=0;
        while(n1>0)
        {
            rem=n1%10;
            sum=sum*10+(rem);
            n1/=10;
        }
        if (sum==i)
        {
            printf("%d\n",sum);
        }
        
    }
}