#include <stdio.h>
#include<conio.h>
void main()
{
    int i,n,arr[5],n1;
    scanf("%d",&n);
    printf("n= %d\n",n);
    scanf("%d",&n1);
    printf("n1= %d\n",n1);
    for(i=0;i<5;i++)
    {
        printf("arr[%d]=",i);
        scanf("%d",&arr[i]);
    }
    for(i=0;i<5;i++)
    {
        printf("%d\n",arr[i]);
    }
    for(i=0;i<5;i++)
    {
        if(arr[i]==n1)
        {
            printf("the position of the number is %d",i);
            break;
        }
        else
        {
            printf("the given number is not present in the array");
            break;
        }
    }
    getch();
}