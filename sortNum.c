#include <stdio.h>

int main()
{
    int a[10];


    for(int i=0;i<3;i++)
       scanf("%d",&a[i]);


    for(int i=0;i<3;i++)
        for(int j=i+1;j<3;j++)
            if(a[i]>a[j])
            {
                int t = a[i];
                a[i]= a[j];
                a[j] = t;

            }
    
    for(int i=0;i<3;i++)
        printf("%d\t",&a[i]);

    return 0;
}