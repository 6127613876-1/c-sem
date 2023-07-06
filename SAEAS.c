#include <stdio.h>
int main()
{
    int x=0,y=1,z,n,i,sum=0;
    scanf("%d",&n);
    for(i=0;i<=n-1;i++)
    {
     z=x+y;
     sum=sum+i;
     printf("%d\n",z);
     x=y;
     y=z;
    }
  printf("The sum of the digits = %d",sum);
}
