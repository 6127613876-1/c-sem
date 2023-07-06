#include <stdio.h>
void prime(int *);

void main()
{
    int a[10];
    int *pa;
    pa=a;
    for(int i=0;i<3;i++)
    {
        scanf("%d",(pa+i));
    }
    prime(pa);
}

void prime(int *pa)
{
    int flag=0;
    for(int i=0;i<3;i++)
    {
        if(*(pa+i)%i!=0)
        {
            printf("%d",*(pa+i));
            flag=0;
            break;
        }
        else{
            flag=1;
            break;
        }
    }
}