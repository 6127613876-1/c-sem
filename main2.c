#include <stdio.h>
#include <conio.h>
int main()
{
    int a,b,n,i,sum=0,digits=1;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
     scanf("%d",&a);
     b=a;
     while(b>0)
     {
         b=b/10;
         digits++;
         printf("%d\n",digits);
         if(3==digits)
         {
             printf("3 digit number %d\n",a);
         }
         break;
     }
    }
}