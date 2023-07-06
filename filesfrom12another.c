#include <stdio.h>
void main()
{
    FILE *f,*g;
    char c[100];
    f=fopen("text1.txt","r+");
    g=fopen("text2.txt","r+");
    if(f==NULL || g==NULL)
    {
        printf("error");
    }
    while (fgets(c,sizeof(c),f)!=NULL)
    {
        fprintf(g,"%s",c);
    }
    
}