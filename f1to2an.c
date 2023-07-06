#include <stdio.h>
void main()
{
    int i;
    char s[100];
    FILE *f,*g;
    f=fopen("text1.txt","r+");
    g=fopen("text2.txt","w+");
    if(f==NULL||g==NULL)
    {
        printf("Error");
    }
    else
    {
        while(fgets(s,sizeof(s),f)!=NULL)
        {
            fputs(s,g);
        }
    }
}