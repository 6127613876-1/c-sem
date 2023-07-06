#include <stdio.h>
void main()
{
    FILE *f,*g;
    char s[100];
    f=fopen("text1.txt","r+");
    g=fopen("text2.txt","w+");
    if(f==NULL||g==NULL)
    {
        printf("ERROR");
    }
    while(fgets(s,sizeof(s),f)!=NULL)
    {
        fputs(s,g);
    }
}