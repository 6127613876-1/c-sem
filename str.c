#include <stdio.h>
void main()
{
    int n,i,j,max,k,min,arr[50];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for (j=0;j<n;j++)
    {
        printf("%d\n",arr[j]); 
    }
    max=arr[0];
    min=arr[0];
    for(k=1;k<n;k++)
    {
        if(arr[k]>max)
    {
        max=arr[k];
    }
    if (arr[k]<min)
    {
        min=arr[k];
    }
    }
    printf("the max %d\n",max);
    printf("the min %d\n",min);
}