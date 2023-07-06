#include<stdio.h>
void main()
{
    int flag=0,n,i=2,l,k,c;
    scanf("%d",&n);
    for(i=2;i<n;i++)
    {
        if(n%i!=0)
        {
            continue;
        }
        else
        {
            flag=1;
            printf("not prime");
            break;
        }
    }
    if(flag==0)
    {
        printf("prime");
    }
    for(k=1;k<n;k++)
    {
        c=0;
        for(l=1;l<n;l++)
        {
            if(k%l==0)
            {
            c++;
            }
        }
        if (c==2)
            {
                printf("\n%d",k);
            }
    }
}