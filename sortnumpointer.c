#include <stdio.h>
void odd(int *);
void neg(int *);
int main()
{
    int a[10];
    int *pa;
    pa=a;
    for(int i=0;i<3;i++)
       scanf("%d",pa+i);

    int max =*(pa);
    
    for(int j=1;j<3;j++)
        if(max<*(pa+j))
            max = *(pa+j);

    printf("sorting number");
    for(int i=0;i<3;i++)
        printf("%d\t",*(pa+i));
    
    printf("Max num: %d\n",max);
    for(int i=0;i<3;i++)
    {
        if(*(pa+i)<0)
        {
            printf("neg number%d ",*(pa+i));
        }
    }
    odd(pa);
    neg(pa);
    return 0;
}

void odd(int *pa)
    {
        int i;
    for(i=0;i<3;i++)
    {
        if(*(pa+i)%2!=0)
        {
            printf("odd number%d ",*(pa+i));
        }
    }
}
void neg(int *pa)
    {
        int i;
    for(i=0;i<3;i++)
    {
        if(*(pa+i)<0)
        {
            printf("neg number%d ",*(pa+i));
        }
    }
    }