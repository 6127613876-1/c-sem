#include<stdio.h>
void main()
{
    int n,i,flag=0,k,l,fact;
    scanf("%d",&n);
    for (i=2;i<n;i++)
    {   
    if(n%i!=0)
    {
        continue;
    }
    else
    {
        flag=1;
        printf("not prime\n");
        break;
    }
    }
    if (flag==0)
    {
        printf("prime\n");
    }
    for(k=1;k<n;k++)
    {
        fact=0;
        for(l=1;l<n;l++)
        {
            if(k%l==0)
            {
                fact++;
            }
        }
         if (fact==2)
                printf("%d\n",k);
    }
}