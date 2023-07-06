#include <stdio.h>

void main()
{
    char a[10];
    FILE *f;
    f=fopen("text.txt","r");
    fgets(a,5,f);
    printf("%s",a);
}