#include <stdio.h>
void main()
{
    int i;
    for(i=1000;i<=9999;i++)
    {
        if(i%2==0)
        {
            continue;
        }
        else
        {
            if (i%9==0)
            {
                printf("%d\n",i);
            }
            else{
                continue;
            }
            
        }
    }
}