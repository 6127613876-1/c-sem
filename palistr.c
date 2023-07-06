#include <stdio.h>
#include<string.h>
void main()
{
    char d[20],rev[100];
    int size,i;
    scanf("%s",&d);
    size=strlen(d);
    for(i=0;i<d[i]!='\0';i++)
    {
        rev[size-i-1]=d[i];
    }
    printf("%s",rev);
}