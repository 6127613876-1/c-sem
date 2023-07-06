#include <stdio.h>
#include<math.h>
void main()
{
    int i=0,sum=0,n,n1,rem;
    scanf("%d",&n);
    n1=n;
    for(n1=n;n1!=0;i++)
    {
        n1/=10;
    }
    for(n1=n;n1!=0;n1/=10)
    {
        rem=n1%10;
        sum=sum+pow(rem,i);
    }
    printf("%d",sum);
}