#include <stdio.h>
#include <string.h>
int main()
{
    int i,count=0;
    char Q[10][20]={"father","mother","brother","sister","gf","bf","bfa","cousin","aunty","uncle"};
    char A[10][20]={"babar","usually","dhd","urur","hdhdh","ururut","ururui","hrurur","hdjdj"};
    char Us[10][20];
    
     for(i=0;i<10;i++)
    {
        printf("%s\n",Q[i]);
    }
    for(i=0;i<10;i++)
    {
        printf("Enter an answer:");
        scanf(" %s",Us[i]);
    }
    for(i=0;i<10;i++)
    {
        if (strcmp(A[i],Us[i])==0)
        {
          count++;
        }
    }
    printf("the total number of scores:%d",count);
    return 0;