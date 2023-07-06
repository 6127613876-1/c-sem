#include <stdio.h>
int main()
{
    int a[2][2],i,j,r,c;
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
     for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    if((a[0][0]==1 && a[1][1]==1)&& (a[1][0]==0 && a[0][1]==0))
    {
        printf("IDENTITY MATRIX");
    }
    else
    {
        printf("NOT A IDENTITY MATRIX");
    }
}