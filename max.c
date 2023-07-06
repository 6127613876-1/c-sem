#include<stdio.h>
void main()
{
    int n,arr[10],i,j,max,temp;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j])
            {
                max=arr[i];
                arr[i]=arr[j];
                arr[j]=max;
            }
        }   
    }
    for(i=0;i<n;i++)
    {
        printf("%d",arr[i]);
    }
    printf("max=%d",arr[n-n]);
}